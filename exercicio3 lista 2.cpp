#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float graus_f, graus_c;
	
	printf("imprima o valor da temperatura em fahrenhiet e descubra esse valor em celcius. \n ");
	printf("temperatura em fahrenhiet:");
	scanf("%f", &graus_f);
	
	graus_c = ((graus_f - 32) * 5) / 9;
	
	printf("o valor em celcius e:%.2f", graus_c);
	
	return 0;
}
