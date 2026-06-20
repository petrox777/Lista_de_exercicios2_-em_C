//  Escrever um programa para ler cinco valores inteiros e escrever na tela o maior 
//e o menor deles

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int numero_digitado, maior_numero, menor_numero, primeiro_numero, i;
	
	printf("digite cinco numeros e descubra quais deles sao o maior e o menor\n");
	
	printf("digite o primeiro numero:");
	scanf("%d", &primeiro_numero);
     
    maior_numero = primeiro_numero;
    menor_numero = primeiro_numero;
     
	i=0;
	while(i<5){
		printf("digite mais um numero:");
		scanf("%d", &numero_digitado);
		
		if(numero_digitado > maior_numero){
		maior_numero = numero_digitado;
		}
		else if(numero_digitado < menor_numero){
		menor_numero = numero_digitado;
		}
		i++;
	}
   
    printf("o maior numero e:%d", maior_numero);
    printf("o menor numero e:%d", menor_numero);
	
	return 0;
}
