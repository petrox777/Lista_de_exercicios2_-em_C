//O custo de um carro novo e´ a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos.
//Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um programa para ler o custo de fábrica 
//de um carro, calcular e escrever o custo final ao consumidor. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float valor_fabrica, impostos, desconto_distribuidor, valor_final;
	
	printf("digite o valor do custo de fabrica do carro:");
	scanf("%f", &valor_fabrica);
	
	desconto_distribuidor = 0.45;
	impostos = 0.28;
	valor_final = valor_fabrica + (valor_fabrica * impostos) + (valor_fabrica * desconto_distribuidor);
	
	printf("o valor final do carro e: %2.f", valor_final);
	
	return 0;
}
