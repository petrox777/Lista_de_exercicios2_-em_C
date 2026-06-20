#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float segundos_inicial, minutos, horas, calculoh, calculom;

    printf("digite o tempo em segundos e descubra quanto ele vale em: horas, minutos e segundos, respectivamente\n");

    printf("digite o tempo em segundos:");
    scanf("%f", &segundos_inicial);

    calculoh = segundos_inicial/3.600;
    horas = calculoh;

    calculom = segundos_inicial/60.0;
    minutos = calculom;

    printf("seu valor em horas %.2f, minutos %.2f e segundos %.2f e:", horas, minutos, segundos_inicial);

//corrigir pq as horas e minutos tem q aparecer com casa decimal
    return 0;
}
