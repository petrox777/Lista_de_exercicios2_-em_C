#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double y, seno, x, graus, radianos;

    printf("digite x e descubra o valor da expressao: ");
    scanf("%lf", &x);

    graus=x;
    radianos = graus * M_PI / 180.0;
    seno = sin(radianos);
    y = seno/x;

    printf("o valor da expressao e: %lf", y);

    return 0;
}
