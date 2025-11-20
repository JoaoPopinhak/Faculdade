#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(10, 11); // RX, TX (ajuste conforme tua ligação)
DFRobotDFPlayerMini player;

#define ledBlue0 9
#define ledYellow1 3
#define ledGreen2 5
#define ledWhite3 7

#define btnBlue0 8
#define btnYellow1 2
#define btnGreen2 4
#define btnWhite3 6

#define rele 12

int numeroAleatorio;
int btnclicado = - 1;
int rodada = 0;


/*----------Controle de Leds----------*/

void ledAzul(){
    digitalWrite(ledBlue0,   HIGH);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen2,  LOW);
    digitalWrite(ledWhite3,  LOW);
}

void ledAmarelo(){
    digitalWrite(ledBlue0,   LOW);
    digitalWrite(ledYellow1, HIGH);
    digitalWrite(ledGreen2,  LOW);
    digitalWrite(ledWhite3,  LOW);
}

void ledVerde(){
    digitalWrite(ledBlue0,   LOW);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen2,  HIGH);
    digitalWrite(ledWhite3,  LOW);
}

void Ledbranca(){
    digitalWrite(ledBlue0,   LOW);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen2,  LOW);
    digitalWrite(ledWhite3,  HIGH);
}

void ledDesligadas(){
    digitalWrite(ledBlue0,   LOW);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen2,  LOW);
    digitalWrite(ledWhite3,  LOW);    
}

void ledPisca(int led, int qtdVezes, int time){
    for(int i = 0; i < qtdVezes; i++){
        ledDesligadas();
        digitalWrite(led, HIGH);
        delay(time); 
        digitalWrite(led, LOW);
        delay(time);
    }
}

void ledTodosPisca(int qtdVezes, int time){
    for(int i = 0; i < qtdVezes; i++){
        ledDesligadas();
        digitalWrite(ledBlue0,   HIGH);
        digitalWrite(ledYellow1, HIGH);
        digitalWrite(ledGreen2,  HIGH);
        digitalWrite(ledWhite3,  HIGH);
        delay(time); 
        digitalWrite(ledBlue0,   LOW);
        digitalWrite(ledYellow1, LOW);
        digitalWrite(ledGreen2,  LOW);
        digitalWrite(ledWhite3,  LOW);
        delay(time);
    }
}

void ledErrado(){
    ledDesligadas();
    digitalWrite(ledBlue0,   HIGH);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen2,  LOW);
    digitalWrite(ledWhite3,  HIGH);
    delay(1000);
    ledDesligadas();
    delay(1000);
    digitalWrite(ledBlue0,   LOW);
    digitalWrite(ledYellow1, HIGH);
    digitalWrite(ledGreen2,  HIGH);
    digitalWrite(ledWhite3,  LOW);
    delay(1000);
    ledDesligadas();
    delay(1000);
    ledTodosPisca(2, 1000);
    delay(1000);
}


void ledAleatorio(int numeroAleatorio){
    if(numeroAleatorio == 0){
        /*LED AZUL*/
        ledAzul();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 1){
        /*LED AMARELA*/
        ledAmarelo();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 2){
        /*LED VERDE*/
        ledVerde();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 3){
        /*LED BRANCA*/
        Ledbranca();
        delay(1000);
        ledDesligadas();
    }
}


/*----------Gerar aleatoriedade----------*/

void aleatorio(){
    numeroAleatorio = random(4);
    ledAleatorio(numeroAleatorio);
}


/*----------Leitura btn clicado----------*/
void keyUp(){
    btnclicado = -1;
    unsigned long tempoAnterior = millis(); //retorna o tempo em milissegundos desde que o Arduino ligou.
    
    while(btnclicado == -1){
        if(digitalRead(btnBlue0) == HIGH){
            btnclicado = 0;
            ledPisca(ledBlue0, 5, 500);
        }else if(digitalRead(btnYellow1) == HIGH){
            btnclicado = 1;
            ledPisca(ledYellow1, 5, 500);
        }else if(digitalRead(btnGreen2) == HIGH){
            btnclicado = 2;
            ledPisca(ledGreen2, 5, 500);
        }else if(digitalRead(btnWhite3) == HIGH){
            btnclicado = 3;
            ledPisca(ledWhite3, 5, 500);
        }else{  
            if (millis() - tempoAnterior >= 5000) {
                tempoAnterior = millis();
                ledAleatorio(numeroAleatorio);
            }
        }
    }
    
    delay(10);
    
    while(digitalRead(btnBlue0) == HIGH ||
        digitalRead(btnYellow1) == HIGH ||
         digitalRead(btnGreen2) == HIGH ||
         digitalRead(btnWhite3) == HIGH)
        {
            delay(10);
        }
}


/*----------Validacao----------*/

void validacao(){
    if(btnclicado == numeroAleatorio){
        rodada++;
        ledTodosPisca(3, 500);
    }else{
        ledErrado();
    }
}

/*Abrir tranca */

void abrirTranca(){
    digitalWrite(rele, HIGH);
    delay(2000);
    digitalWrite(rele, LOW);
}


void setup(){
    randomSeed(analogRead(A0)); // Inicializa a semente aleatória
    /*Configuracoes dos modos de pinagem dos leds*/
    pinMode(ledBlue0, OUTPUT);
    pinMode(ledYellow1, OUTPUT);
    pinMode(ledGreen2, OUTPUT);
    pinMode(ledWhite3, OUTPUT);
    /*Configuracoes dos modos de pinagem dos botoes*/
    pinMode(btnBlue0, INPUT);
    pinMode(btnYellow1, INPUT);
    pinMode(btnGreen2, INPUT);
    pinMode(btnWhite3, INPUT);
    /*Configuração dos modos de pinagem rele*/
    pinMode(rele, OUTPUT);
    /*Configuração modulo DF Mini Player*/
    mySerial.begin(9600);
    Serial.begin(9600);

    if (!player.begin(mySerial)) {
    Serial.println("DFPlayer não detectado. Continuando sem áudio...");
    } else {
        Serial.println("DFPlayer Mini pronto!");
        player.volume(20);
        player.play(1);
}


}

void loop(){
    while(rodada < 4){
        aleatorio();
        delay(10);
        keyUp();
        delay(10);
        validacao();
    }
    abrirTranca();
    rodada = 0;
    delay(1000);
}