// Faça um programa para ler: a descrição do produto (nome), a quantidade 
//adquirida e o preço unitário. Calcular e escrever o total (total = quantidade 
//adquirida * preço unitário), o desconto e o total a pagar (total a pagar = total - 
//desconto), sabendo-se que: 
//Se quantidade <= 5 o desconto sera´´ de 2% 
//Se quantidade > 5 e quantidade <= 10 o desconto sera´´ de 3% 
//Se quantidade > 10 o desconto sera´´ de 5%

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int quantidade=0;
	int adicionar;
	char nome[130];
	float  preco_unitario, desconto, subtotal;
	float valor_final;
	float compra_total=0;
	
	printf("saudacoes, digite as informacoes da sua compra e descubra o valor final\n");
	
	while(1){
	   printf("nome do produto:");
	   scanf("%s", nome);
	
	   printf("preco unitario do produto:\n");
	   scanf("%f", &preco_unitario);
	
	   printf("quantidade do produto:\n");
	   scanf("%d", &quantidade);
	   
	   printf("deseja adicionar outro produto?, digite 1 para sim e 2 para nao:\n");
	   scanf("%d", &adicionar);
	   
	   subtotal = preco_unitario * quantidade;
	   compra_total += subtotal;
	   quantidade += quantidade;
	   
	   if(adicionar == 2){
	   	    break;
	   }
    }
    
    if(quantidade <= 5){
    	desconto = 0.02;
	}
	else if(quantidade > 5 and quantidade <= 10){
		desconto = 0.03;
	}
    else if(quantidade > 10){
    	desconto = 0.05;
	}

    valor_final=  compra_total - (compra_total * desconto);
    
    printf("o valor toral da compra e: %2.f", valor_final);
	
	
	
	
	
	return 0;
}
