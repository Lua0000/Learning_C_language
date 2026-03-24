#include <stdio.h>
#include <locale.h>

int main(void) {
    int n_horas;
    long res;
    char tipo;
    printf("Numero de horas: ");
    scanf("%d", &n_horas);
    printf("Tipo: (m/s/d): ");
    scanf(" %c", &tipo);
    res = n_horas;
    switch (tipo) {
        case 'd':
        case 'D': res = res * 10;
        case 's':
        case 'S': res = res * 60;
        case 'm':
        case 'M': res = res * 60;
    }
    printf("%d Horas --> %ld%c", n_horas, res,tipo);
}