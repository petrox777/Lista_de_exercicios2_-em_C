//Escreva um programa que leia três valores para os lados de um triângulo. O 
//programa deve verificar se os lados fornecidos formam realmente um triângulo, 
//e caso esta condição seja verdadeira, se o triângulo e´ equilátero (todos lados 
//iguais), isósceles (dois lados iguais) ou escaleno (todos lados diferentes)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float lado1, lado2, lado3;
	
	printf("digite o comprimento do primeiro lado do triangulo:");
	scanf("%f", &lado1);
	
	printf("digite o comprimento do segundo lado do triangulo:");
	scanf("%f", &lado2);	
		
	printf("digite o comprimento do terceiro lado do triangulo:");
	scanf("%f", &lado3);
	
	if(lado1 + lado2 > lado3 and lado2 + lado3 > lado1 and lado3 + lado1 > lado2){
		if(lado1 == lado2 and lado2 == lado3){
			printf("o triangulo e equilatero");
	    }
		else if(lado1 == lado2 or lado1 == lado3 or lado2 == lado3){
			printf("o triangulo e isoceles");
		}
		else{
			printf("o triangulo e escaleno");
	    }
	}
	else{
		printf("pela medida oferecida os 3 lados nao formam um triangulo");
	}
	
	return 0;
}
