#include <stdio.h>
#include <stdlib.h>

int main(){
	
    float nota1, nota2, nota3, media, resultado;

    printf("descubra a sua media ponderada\n");

    printf("nota1:");
    scanf("%f", &nota1);

    printf("nota2:");
    scanf("%f", &nota2);

    printf("nota3:");
    scanf("%f", &nota3);

    // Cálculo da média ponderada: (n1*2 + n2*3 + n3*5) / (2+3+5)
    media = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;
    resultado = media;

    printf("sua media e: %.2f", resultado);

    return 0;
}
	
	
	
	
	
	

