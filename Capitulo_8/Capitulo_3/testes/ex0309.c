#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese_Brazil");
    float salario;
    char est_civil;

    printf("Qual o salário: ");
    scanf("%f", &salario);
    printf("Qual o estado civil: ");
    scanf(" %c", &est_civil);
    if (est_civil == 'C' ||est_civil == 'c') {
        printf("Imposto: %.2f\n", salario*0.10);

        } else {
            if (est_civil == 'S' || est_civil == 's') {
                printf("Imposto: %.2f\n",salario*0.05);
            }
        }
    }
