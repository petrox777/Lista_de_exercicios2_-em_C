#include <stdio.h>
#include <stdlib.h>

int main(){
	char caractere;
	
	printf("digite um caractere e descubra seu antecessor e sucessor:");
	scanf("%c", &caractere);
	
	printf("o antecessor e: %c (Valor ASCII: %d)", caractere - 1, caractere - 1);
	printf("o sucessor e: %c (Valor ASCII: %d)", caractere + 1, caractere +1);
	
	system("pause");
	return 0;
}
