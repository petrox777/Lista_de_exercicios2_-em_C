//Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
//Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas ate´ R$ 
//1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu 
//salário total

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
	float salario_final, salario_fixo, venda, comissao, extra;
	
	char funcionario[20];
	
	printf("digite o nome do funcionario:");
	scanf("%s", funcionario);
	
	printf("digite o valor do salario do vendedor:");
	scanf("%f", &salario_fixo);
	
	printf("digite o valor total das vendas realizadas por esse vendedor:");
	scanf("%f", &venda);
	
	if(venda >= 1500){
		comissao = 1500 * 0.03;
		extra = (venda - 1500) * 0.05;
		salario_final = salario_fixo + comissao + extra;
	}
	else{
		comissao = venda * 0.03;
		salario_final = salario_fixo + comissao;
	}
	 
	printf("o salario final do funcionario %s e igual a: %2.f", funcionario, salario_final); 
	
	return 0;
}
