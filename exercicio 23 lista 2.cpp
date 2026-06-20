// Ler um valor e escrever se e´ positivo, negativo ou zero.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero_digitado;
	
	printf("digite  um numero e descubra se ele e positivo, negativo ou nulo:");
	scanf("%f", &numero_digitado);
	
	if(numero_digitado > 0){
		printf("o numero %2.f e positivo", numero_digitado);
	}
	else if(numero_digitado < 0){
		printf("o numero %2.f e negativo", numero_digitado);
	}
	else{
		printf("o numero %2.f e nulo", numero_digitado);
	}
	return 0;
}
