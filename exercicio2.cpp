#include <stdio.h>
#include <stdlib.h>

int main(){
	float base, altura, area, calculo; 
	
	printf("descubra a area de um triangulo\n");
	
	printf("digite o valor da base:\n");
	scanf("%f", &base);
	
	printf("digite o valor da altura:\n");
	scanf("%f", &altura);
	
	calculo = (base*altura);
	area=calculo/2;
	
	printf("a area do triangulo e: %f", area);
	
	
	return 0;
}
