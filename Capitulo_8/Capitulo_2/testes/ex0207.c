#include <stdio.h>

int main() {
	
	float raio, perimetro;
	double Pi = 3.1415927, area;
	
	printf("Digite o valor da circunferencia: ");
	scanf("%f", &raio);
	
	area = Pi * raio * raio;
	perimetro = 2 * Pi * raio;
	
	printf("O valor da area = %f \n o valor do perimetro = %lf", area, perimetro);
}