// Ler um valor inteiro e escrever a mensagem E´ MAIOR QUE 10! se o valor lido for 
//maior que 10, caso contrário escrever NA~O E´ MAIOR QUE 10! 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero_digitado;
	
	printf("digite um numero e descubra se ele e menor, igual ou maior que 10:");
	scanf("%f", &numero_digitado);
	
	if(numero_digitado>10){
	printf("%f e maior que 10", numero_digitado);

}
	
	else if(numero_digitado == 10){
	printf("%f e igual a 10", numero_digitado);
}
	else{
	printf("%f e menor que 10", numero_digitado);
	}
	
	
	
	
	return 0;
}
