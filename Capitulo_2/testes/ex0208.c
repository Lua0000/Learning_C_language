#include <stdio.h>

int main()
{
    float quilos = 1000;
	double gramas = 1000000;
	float n_toneladas;
	
	printf("Digite aqui quantas toneladas: ");
	scanf("%f", &n_toneladas);
	
	quilos = n_toneladas * quilos;
	gramas = n_toneladas * gramas;
	printf("Quilos: %f \n Gramas: %f\n", quilos, gramas);
}