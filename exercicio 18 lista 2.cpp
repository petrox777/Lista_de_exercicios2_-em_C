//Escrever um programa que peça dois valores inteiros e imprima o menu com as 
//opções: soma, diferença, produto, divisão, o resto da divisão, a potência (de um 
//pelo outro) e a raiz quadrada de cada número lido. Vale lembrar que na divisão 
//deve-se evitar o denominador zero. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char operacao, soma, diferenca, produto, divisao, resto, potencia;
	float numero_1, numero_2, resultado;
	
	printf("calculadora aberta:");
	
	printf("digite o primeiro numero:");
	scanf("%f", &numero_1);
	
	printf("digite o segundo numero:");
	scanf("%f", &numero_2);
	
	printf("realize operacoes, as opcoes sao: soma, diferenca, produto, divisao, o resto da divisao e potencia. qual a operaçao desejada:");
	scanf("%s", &operacao);
	
	if(operacao == soma){
	    resultado = numero_1 + numero_2;
	}	
	else if(operacao == diferenca){
    	resultado = numero_1 - numero_2;
	}
	else if(operacao == produto){
	    resultado = numero_1 * numero_2;
	}
	else if(operacao == divisao){
	    resultado = numero_1/numero_2;
	}
	else if(operacao == resto){
	    resultado = fmod(numero_1, numero_2);//unico jeito de mostrar o resto de uma divisão em C com variaveis float
	}
	else if(operacao == potencia){//pow(base, expoente)
	    resultado = pow(numero_1,numero_2);
	}
	
	printf("o resultado da operacao e:%2.f", resultado);
	
	
	return 0;
}
