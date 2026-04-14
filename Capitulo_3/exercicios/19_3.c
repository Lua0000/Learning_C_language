#include <stdio.h>

int main() {
    int mes, n_dias = 0;

    printf("Introduza o número do mês 1-12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_dias = 31;
        case 4:
        case 6:
        case 9:
        case 11:
            if (n_dias == 0) n_dias = 30;
        case 2:
            if (n_dias == 0) n_dias = 28;
        default:
            if (mes < 1 || mes > 12) {
                printf("mes invalido\n");
                return 0;
            }
    }

    printf("O mês %d tem %d dias.\n", mes, n_dias);

    return 0;
}