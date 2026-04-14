#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");
    char Est_civil;
    printf("Qual estado civil? ");
    scanf("%c", &Est_civil);
    switch (Est_civil) {
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;

        case 'C':
        case 'c':
            printf("Casado\n");
            break;

        case 'V':
        case 'v':
            printf("Viuvo\n");
            break;

        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;

        default: printf("Estado Civil Incorreto");
    }
}