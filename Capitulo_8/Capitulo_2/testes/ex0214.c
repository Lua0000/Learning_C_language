#include <stdio.h>

int main() {

	int num;
	printf("Introduza um numero inteiro: ");
	scanf("%d",&num);
	
	printf("Foi introduzido %d Cujo caractere '%c' \n", num, (char)num);
	printf("O caractere seguinte '%c' tem o ASCII Numero %d \n", (char)(num +1), num+1);
	
	
}