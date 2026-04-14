#include <stdio.h>

int main() {
	//propositalmente incorreto
	
	char ch1 = 'X';
	char ch2 = 'Y';
	
	printf("Introduza um inteiro: ");
	scanf("%d", &ch2);
	
	printf("O valor de ch1 = '%c' e ch2 '%c'\n ", ch1, ch2);
}