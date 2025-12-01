#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

SoftwareSerial mySerial(10, 11); // RX, TX (ajuste conforme tua ligação)
DFRobotDFPlayerMini player;

#define ledBlue0 13
#define ledYellow1 3
#define ledGreen2 5
#define ledWhite3 7

#define btnBlue0 8
#define btnYellow1 2
#define btnGreen2 4
#define btnWhite3 6

#define rele 12

int numeroAleatorio;
int audio = 1;
int btnclicado = - 1;
int rodada = 0;

void setup(){
    randomSeed(analogRead(A0)); // Inicializa a semente aleatória
    //Configuracoes dos modos de pinagem dos leds/
    pinMode(ledBlue0, OUTPUT);
    pinMode(ledYellow1, OUTPUT);
    pinMode(ledGreen2, OUTPUT);
    pinMode(ledWhite3, OUTPUT);
    //Configuracoes dos modos de pinagem dos botoes/
    pinMode(btnBlue0, INPUT_PULLUP);
    pinMode(btnYellow1, INPUT_PULLUP);
    pinMode(btnGreen2, INPUT_PULLUP);
    pinMode(btnWhite3, INPUT_PULLUP);
    //Configuração dos modos de pinagem rele/
    pinMode(rele, OUTPUT);
    //Configuração modulo DF Mini Player/
    mySerial.begin(9600);
    Serial.begin(9600);

    if (!player.begin(mySerial)) {
    Serial.println("DFPlayer não detectado. Continuando sem áudio...");
    } else {
        Serial.println("DFPlayer Mini pronto!");
        player.volume(30);
    }

}


//----------Controle de Leds----------/

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

void ledCerto(int qtdloops, int time){
    for(int i = 0; i < qtdloops; i++){
        ledDesligadas();
        ledAzul();
        delay(time);
        ledAmarelo();
        delay(time);
        ledVerde();
        delay(time);
        Ledbranca();
        delay(time);
        ledDesligadas();
    }
}


void ledAleatorio(int numeroAleatorio){
    if(numeroAleatorio == 0){
        /*LED AZUL*/
        if(audio == 1){
            player.play(2);
            audio = 2;
        }else{
            player.play(1);
            audio = 1;
        } 
        ledAzul();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 1){
        /*LED AMARELA*/
        if(audio == 1){
            player.play(3);
            audio = 2;
        }else{
            player.play(4);
            audio = 1;
        }
        ledAmarelo();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 2){
        /*LED VERDE*/
        if(audio == 1){
            player.play(5);
            audio = 2;
        }else{
            player.play(6);
            audio = 1;
        }
        ledVerde();
        delay(1000);
        ledDesligadas();
    }else if(numeroAleatorio == 3){
        /*LED BRANCA*/
        if(audio == 1){
            player.play(7);
            audio = 2;
        }else{
            player.play(8);
            audio = 1;
        }
        Ledbranca();
        delay(1000);
        ledDesligadas();
    }
}


//----------Gerar aleatoriedade----------/

void aleatorio(){
    numeroAleatorio = random(4);
    ledAleatorio(numeroAleatorio);
}


//----------Leitura btn clicado----------/
void keyUp(){
    btnclicado = -1;
    unsigned long tempoAnterior = millis(); //retorna o tempo em milissegundos desde que o Arduino ligou.
    
    while(btnclicado == -1){
        if(digitalRead(btnBlue0) == LOW){
            btnclicado = 0;
            ledPisca(ledBlue0, 5, 100);
        }else if(digitalRead(btnYellow1) == LOW){
            btnclicado = 1;
            ledPisca(ledYellow1, 5, 100);
        }else if(digitalRead(btnGreen2) == LOW){
            btnclicado = 2;
            ledPisca(ledGreen2, 5, 100);
        }else if(digitalRead(btnWhite3) == LOW){
            btnclicado = 3;
            ledPisca(ledWhite3, 5, 100);
        }else{  
            if (millis() - tempoAnterior >= 5000) {
                tempoAnterior = millis();
                ledAleatorio(numeroAleatorio);
            }
        }
    }  
    delay(10);
    while(digitalRead(btnBlue0) == LOW ||
        digitalRead(btnYellow1) == LOW ||
         digitalRead(btnGreen2) == LOW ||
         digitalRead(btnWhite3) == LOW)
        {
            delay(10);
        }
}


//----------Validacao----------/

void validacao(){
    if(btnclicado == numeroAleatorio){
        rodada++;
        player.play(9);
        ledCerto(4,100);
    }else{
        player.play(11);
        ledTodosPisca(4,100);
    }
}

/* Abrir tranca */

void abrirTranca(){
    delay(50);
    player.play(13);
    delay(50);
    ledCerto(4,125);
    delay(2000);
    digitalWrite(rele, HIGH);
    delay(2000);
    digitalWrite(rele, LOW);
    delay(50);
    rodada = 0;
    delay(1000);
}

void loop(){
    while(rodada < 4){
        aleatorio();
        delay(50);
        keyUp();
        delay(100);
        validacao();
        delay(1500);
    }
    abrirTranca();
}