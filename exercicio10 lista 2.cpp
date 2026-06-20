#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nulos, brancos, validos, nulos_p, brancos_p, validos_p, total;
	
	printf("descubra qual a porcentagem de votos nulos, brancos e validos\n");
	
	printf("digite a quantidade de votos nulos:");
	scanf("%f", &nulos);
	
	printf("digite a quantidade de votos  brancos:");
	scanf("%f", &brancos);
	
	printf("digite a quantidade de votos  validos:");
	scanf("%f", &validos);
	
	total = nulos + brancos + validos;
    nulos_p = (nulos/100);
    brancos_p = brancos/100;
	validos_p = validos/100;
	
	printf("a relaçao de porcentagem entre as categorias nulos%.2f, brancos%.2f, validos%.2f, porcento", nulos_p, brancos_p, validos_p);
	
	return 0;
}
