#include <stdio.h>


int main(void) {

    int mes;
    printf("Introduza o mes 1-12: ");
    scanf("%d", &mes);
    if (mes == 2) {
        printf("O mes %d tem 28 dias\n", mes);
    } else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8|| mes == 10 || mes == 12) {
            printf("O mes %d tem 31 dias\n", mes);
        } else {
            printf("O mes %d tem 30 dias\n", mes);
        }
    }
}