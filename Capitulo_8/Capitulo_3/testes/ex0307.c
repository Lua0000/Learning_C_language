#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario, taxa;
    printf("Qual o salário: ");
    scanf("%f", &salario);
    if (salario <= 1000) {
        taxa = 0.5;
    } else {
        if (salario < 5000) {
            taxa = .11;
        } else {
            taxa = .35;
        }
    }
    printf("Salario: %.2f Imposto: %.2f Liquido: %.2f\n", salario, salario*taxa, salario*(1.0-taxa));
}