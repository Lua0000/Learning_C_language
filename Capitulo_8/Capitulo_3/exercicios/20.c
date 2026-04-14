#include <stdio.h>

int main() {
    int dia, mes, ano, n_dias = 0;
    printf("Digite uma data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch(mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            n_dias = 30;
            break;
        case 2:
            n_dias = 28;
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
                n_dias = 29;
            break;
        default:
            n_dias = 0;
    }

    if (dia < 1 || dia > n_dias || mes < 1 || mes > 12 || ano < 1 || ano > 9999)
        printf("Data invalida\n");
    else
        printf("%d/%d/%d e valido\n", dia, mes, ano);

    return 0;
}