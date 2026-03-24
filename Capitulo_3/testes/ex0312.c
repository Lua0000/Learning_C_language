#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");
    char Est_civil;
    printf("Qual estado civil? ");
    scanf("%c", &Est_civil);
    switch (Est_civil) {
        case 'S':
            printf("Solteiro\n");
            break;

        case 'C':
            printf("Casado\n");
            break;

        case 'V':
            printf("Viuvo\n");
            break;

        case 'D':
            printf("Divorciado\n");
            break;

            default: printf("Estado Civil Incorreto");
    }
}