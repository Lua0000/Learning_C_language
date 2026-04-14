#include <stdio.h>

int main() {
	
	int Ano, Mes, Dia;
	
	printf("Ano: ");
	scanf("%d", &Ano);
	printf("Mes: ");
	scanf("%d", &Mes);
	printf("Dia: "); 
	scanf("%d", &Dia);
	
	printf("Formato AAAA-MM-DD: %d-%d-%d Formato DD-MM-AA: %d/%d/%d", Ano, Mes, Dia, Dia, Mes, Ano);
	return 0;
}