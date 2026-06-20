//Escrever um programa para ler duas notas de um aluno e escrever na tela a 
//palavra “Aprovado” se a me´dia das duas notas for maior ou igual a 7,0. Caso a 
//média seja inferior a 7,0, o programa deve ler uma nova nota relativa ao Exame 
//Final e calcular e imprimir o resultado com a média final. Se esta média for maior 
//ou igual a 7,0, o programa deve escrever “Aprovado” com a nota Fixa 6, caso 
//contrário deve escrever "Reprovado".

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float nota1, nota2, nota3, media1, final;
	
	printf("digite a nota da primeira prova:");
	scanf("%f", &nota1);
	
	printf("digite a nota da segunda prova:");
	scanf("%f", &nota2);
	
	media1= (nota1 + nota2)/2;
	
	if(media1 >= 7){
		printf("Aprovado");
	}
	else{
		printf("digite a nota da prova final:");
	    scanf("&f", &final);
	    
	    if(final >= 6){
	    	printf("Aprovado com 6 pontos");   	
	    }
	    else{
	    	printf("Reprovado");
		}	
	}

	return 0;
}
