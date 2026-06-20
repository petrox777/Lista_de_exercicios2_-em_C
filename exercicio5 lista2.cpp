#include <stdio.h>
#include <stdlib.h>

int main() {
    int anos, meses, dias, calculo, dias_resultado;

    printf("descubra quantos dias voce viveu ate hoje\n");
    
    printf("idade em anos: ");
    scanf("%d", &anos);

    printf("meses (contando desde seu ultimo aniversario ate hoje): ");
    scanf("%d", &meses);

    printf("dias (pegue a data do seu aniversario e subtraia do valor do dia de hoje): ");
    scanf("%d", &dias);

    // O cálculo assume meses de 30 dias e anos de 365 dias
    calculo = anos * 365 + meses * 30 + dias;
    dias_resultado = calculo;

    printf("voce viveu %d dias ate hoje", dias_resultado);

    return 0;
}
