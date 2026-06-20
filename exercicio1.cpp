#include <stdio.h>
#include <stdlib.h>
// Escrever um programa para ler um número inteiro e exibir seu sucessor e seu antecessor

int main(){
	int numero_principal, n_antecessor, n_sucessor; 
	
	printf("digite um numero e descubra seu antecessor e seu sucessor:");
	scanf("%d", &numero_principal);
	
	n_antecessor = numero_principal-1;
	n_sucessor= numero_principal+1;
	
	printf("os numeros em ordem sao: %d, %d, %d", n_antecessor, numero_principal, n_sucessor);
	
	return 0;
}
