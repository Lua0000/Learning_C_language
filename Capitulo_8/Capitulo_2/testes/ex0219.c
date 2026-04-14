#include <stdio.h>

int main() {
	
	float x;
	printf("Digite um numero real: ");
	scanf("%f", &x);
	
	printf("Parte inteira %d\n", (int)x);
	printf("Parte fracionaria %f\n", x - ((int) x));
	

}