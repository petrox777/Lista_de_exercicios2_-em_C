//// Escreva um programa para ler o salário mensal atual de um funcionário e o 
//percentual de reajuste. Calcule e escreva o valor do novo salário. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float salario_atual, valor_porcentagem, salario_novo;
	
	printf("digite seu salario:");
	scanf("%f", &salario_atual);
	
	printf("digite o valor em 'casas decimais geradas pelo resultado da porcentagem' do reajuste do salario:");
	scanf("%f", &valor_porcentagem);
	
	salario_novo = salario_atual + (salario_atual * valor_porcentagem);
	
	printf("o valor do novo salario e igual a: %2.f R$", salario_novo);
	
	return 0;
}
