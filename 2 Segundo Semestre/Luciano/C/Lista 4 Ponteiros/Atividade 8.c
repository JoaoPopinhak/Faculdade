#include <stdio.h>
#include <math.h>

int raizesReais (float a, float b, float c, float *x1, float *x2){
	float delta;
	
	delta = pow(b, 2) - 4 * a * c;
	if(delta < 0){
		printf("As raizes nao sao reais");
		return 0;
	}else{
		delta = sqrt(delta);
		*x1 = (-b + delta)/(2*a);
		*x2 = (-b - delta)/(2*a);
		return 1;
	}
	
}

int main(){
	float a, b, c, x1, x2;
	
	printf("Digite o A da sua equacao: ");
	scanf("%f", & a);
	
	printf("Digite o B da sua equacao: ");
	scanf("%f", & b);
	
	printf("Digite o C da sua equacao: ");
	scanf("%f", & c);
	
	raizesReais (a, b, c, &x1, &x2);
	
	printf("X1: %f\nX2: %f", x1, x2);
}
