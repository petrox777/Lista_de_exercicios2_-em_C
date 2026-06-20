#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero_digitado, resultado;
	
	printf("digite um numero e descubra se ele e par ou impar:");
	scanf("%d", &numero_digitado);
	
	resultado = (numero_digitado) % 2;
	
	if(resultado == 0){
		printf("o numero e par");
	}
	
	else if(resultado ==!0){
		printf("o numero e impar");
	}
	
	return 0;
}
