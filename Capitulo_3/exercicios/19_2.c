#include <stdio.h>
#include <stdio.h>


int main(void) {
    int mes;
    printf("Introduza o mes 1-12: ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("O mes %d tem 31 dias", mes);
            break;
        case 4:
        case 6:
        case 9:
        case 11: printf("O mes %d tem 30 dias", mes);
            break;
        case 2: printf("O mes %d tem 28 dias", mes);
            break;
            default: printf("Digite um valor valido \n");

    }
}