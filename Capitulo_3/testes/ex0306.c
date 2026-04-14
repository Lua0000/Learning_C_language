#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario;
    printf("Qual o salário: ");
    scanf("%f", &salario);
    if (salario<=0) {
        printf("Valor inválido");
    } else {
        if (salario > 1000) {
            printf("Imposto: %.2f\n", salario * 0.10);
        }else {
            printf("Imposto: %2.f \n", salario * 0.5);
        }
    }

}
