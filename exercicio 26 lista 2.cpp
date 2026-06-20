//Ler dois valores e imprimir uma das três mensagens a seguir: 
//‘Números iguais’, caso os números sejam iguais 
//‘Primeiro e´ maior’, caso o primeiro seja maior que o segundo; 
//‘Segundo maior’, caso o segundo seja maior que o primeiro. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float n1, n2;
	
	printf("digite dois numeros e descubra a comparacao entre eles\n");
	
	printf("primeiro numero:");
	scanf("%f", &n1);
	
	printf("segundo numero:");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf("o primeiro e maior");
	}
	else if(n1 < n2){
		printf("o segundo e maior");
	}
	else{
		printf("numeros iguais");
	}
	
	
	
	
	return 0;
}
