#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");

    char Est_civil;
    puts("Qual o estado civil? ");
    Est_civil = getchar();
    if (Est_civil == 'S' || Est_civil == 's') {
        printf("Solteiro");

    } else {
        if (Est_civil == 'C' || Est_civil=='c') {
            printf("Casado");
        } else {
            if (Est_civil == 'V' || Est_civil == 'v') {
                printf("Viuvo");
            } else {
                printf("Estado civil inválido");
            }
        }
    }
}