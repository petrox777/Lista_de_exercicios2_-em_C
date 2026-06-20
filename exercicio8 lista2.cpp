#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra_maiuscula;
	
	printf("escreva uma letra maiuscula e descubra o desenho dela de modo minuscula:");
	scanf("%c", &letra_maiuscula);
	
	printf("o desenho dessa letra de forma minuscula e: %c", letra_maiuscula + 32);
	

	return 0;
}
