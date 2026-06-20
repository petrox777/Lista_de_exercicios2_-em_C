//  Ler o nome de 2 times e o número de gols marcados na partida (para cada time). 
//Escrever o nome do vencedor. Caso não haja vencedor devera´ ser impressa a palavra EMPATE

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int gols_t1, gols_t2;
	char time1[40], time2[40];
	
	printf("qual o nome dos times que irão se enfrentar?\n");
	
	printf("time da casa:");
	scanf("%s", time1);
	
	printf("time de fora:");
	scanf("%s", time2);
	
	printf("quantidade de gols do time da casa:");
	scanf("%d", &gols_t1);
	
	printf("quantidade de gols do time de fora:");
	scanf("%d", &gols_t2);
	
	if(gols_t1 > gols_t2){
		printf("o time %s e o vencedor", time1);
	}
	else if(gols_t1 < gols_t2){
		printf("o time %s e o vencedor", time2);
	}
	else{
		printf("empate");
	}
	
	return 0;
}
