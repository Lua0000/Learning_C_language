#include <stdio.h>

int main() {

	// propositalmente incorreto.
	int num=1000;
	printf("Introduza um caractere: ");
	scanf("%c", &num);
	printf("O valor de num %d cujo caractere = '%c' \n", num, (char)num);
}