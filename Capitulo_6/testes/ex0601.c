#include <stdio.h>

int main(void){
    float salario[12];
    float total;
    int i;

    for(i = 0; i < 12; i++){
        printf("Introduza o Salario do mes %d:\n", i + 1);
        scanf("%f", &salario[i]);
    }

    puts("Mes:          Valor");

    total = 0.0;
    for(i = 0; i < 12; i++){
        printf("%3d         %9.2f\n", i + 1, salario[i]);
        total += salario[i];
    }

    printf("Total anual: %9.2f\n", total);

    return 0;
}