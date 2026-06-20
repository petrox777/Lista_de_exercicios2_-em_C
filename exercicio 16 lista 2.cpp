// Codifique um programa que leia um par ordenado (x, y) e informe a qual 
//quadrante ele pertence. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float valor_x, valor_y; //guardando os valores
	
	printf("digite o valor de x e y com duas casas decimais e descubra a qual quadrante o ponto escolhido pertence\n");//pedindo os valores 
	printf("digite x:");
	scanf("%f" , &valor_x);//savlando os valores
	printf("digite y:");
	scanf("%f", &valor_y);
	
	if( valor_x > 0 and valor_y > 0){
		printf("o ponto escolhido pertence ao primeiro quadrante");
	}
	else if(valor_x > 0 and valor_y < 0){
		printf("o ponto escolhido pertence ao quarto quadrante");
	}
	else if(valor_x < 0 and valor_y < 0){
		printf("o ponto escolhido pertence ao terceiro quadrante");
	}
	else if(valor_x < 0 and valor_y > 0){
		printf("o ponto escolhido pertence ao segundo quadrante");
	}
	else{
		printf("o ponto escolhido esta no ponto inicial ou neutro");
	}
	
	
	
	return 0;
}

