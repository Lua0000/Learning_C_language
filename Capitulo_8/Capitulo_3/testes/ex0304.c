#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float salario;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    if (salario<100000) {
        salario = salario + 1000;
        printf("Salário final: %.2f\n", salario);
        
    }
}