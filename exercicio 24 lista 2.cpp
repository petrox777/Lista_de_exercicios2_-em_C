// Faça um programa para ler três valores inteiros e escreve^-los em ordem crescente

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n1, n2, n3;
	
	printf("digite 3 numeros e descubra como eles ficam em ordem crescente\n");
	
	printf("primeiro numero:");
	scanf("%d", &n1);
	
	printf("segundo numero:");
	scanf("%d", &n2);
	
	printf("terceiro numero:");
	scanf("%d", &n3);
	
	if( n1 >= n2 and n3 <= n1){
		if(n2 >= n3){
			printf("a ordem e: %d %d %d", n3, n2, n1);
		}
		else{
			printf("a ordem e: %d %d %d", n2, n3, n1);
		}	
	}
	else if(n2 >= n1 and n2 >= n3){
		if(n1 >= n3){
			printf("a ordem e: %d %d %d", n3, n1, n2);
		}
		else{
			printf("a ordem e: %d %d %d", n1, n3, n2);
	    }
	}
	else if(n3 >= n1 and n3 >= n2){
		if(n1 >= n2){
			printf("a ordem e: %d %d %d", n2, n1, n3);
		}
		else{
			printf("a ordem e: %d %d %d", n1, n2, n3);
	    }
	}
	
	return 0;
}
