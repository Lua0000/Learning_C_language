#include <stdio.h>

int main() {
	
	int Dia, Mes, Ano;
	
	printf("Digite uma data: ");
	scanf("%d", &Dia);
	
	printf("Digite um mes: ");
	scanf("%d", &Mes);
	
	printf("Digite um ano: ");
	scanf("%d", &Ano);
	
	printf("A data: %d/%d/%d\n", Dia, Mes, Ano);
	return 0;
}