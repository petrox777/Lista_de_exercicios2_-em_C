#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// As maças custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 
//1,00 se forem compradas pelo menos 12. Escreva um programa que leia o 
//número de maças compradas, calcule e escreva o custo total da compra. 

int main(){
	
	int quantidade_de_macas;
	float preco;
	
	printf("fale a quantidade de macas que ira comprar e descubra o valor da compra:");
	scanf("%d", &quantidade_de_macas);
	
	if(quantidade_de_macas < 12){
	  preco = quantidade_de_macas * 1.3;
	  printf("o valor da compra e:%f", preco);
	}
	else if(quantidade_de_macas >=12){
	  preco = quantidade_de_macas;
	  printf("o valor da compra e:%f", preco);
    }
	return 0;
}
