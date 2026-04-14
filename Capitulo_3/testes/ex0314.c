#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");

    float salario, imposto = 0.0;
    char sexo;



    printf("Introduza seu Salário: ");
    scanf("%f", &salario);

    printf("Qual o Sexo? ");
    scanf(" %c", &sexo);
    switch (sexo) {
        case 'f':
        case 'F': imposto = 0.10;
            break;
        case 'm':
        case 'M':imposto = 0.15;
            break;
        case 'y':
        case 'Y':imposto = 0.10;
            break;

    }

    printf("Imposto:%.2f", salario * imposto);
}