#include <stdio.h>

int main() {

	char ch1, ch2, ch3;
	printf("Introduza um caractere: ");
	scanf("%c", &ch1);
	
	printf("Introduza um segundo caractere: ");
	scanf(" %c", &ch2);
	
	printf("Introduza um terceiro caractere: ");
	scanf(" %c", &ch3);
	printf("Os caracteres introduzidos foram '%c', '%c' e '%c' \n", ch1, ch2, ch3);
	
}