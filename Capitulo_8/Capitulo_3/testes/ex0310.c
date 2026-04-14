#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");

    float salario;
    printf("Qual o Salário: "); scanf("%f", &salario);
    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
    printf("Novo salário: %.2f", salario);
}
