#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");
    float salario, imposto = 0.0;
    char sexo;
    printf("Introduza um salário: ");
    scanf("%f", &salario);
    printf("Qual o sexo? ");
    scanf(" %c", &sexo);

    switch (sexo) {

        case 'm':
        case 'M': imposto = imposto + 0.05;
        case 'f':
        case 'F': imposto = imposto + 0.10;
    }
    printf("Imposto: %.2f", salario * imposto);














}