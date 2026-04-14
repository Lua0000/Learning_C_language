#include <stdio.h>

int main(void) {
    int ano;
    printf("Digite o ano para saber se e bissexto: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0) {
        printf("E bissexto\n");

    } else {
       if (ano % 400 == 0) {
           printf("e bissexto");
       } else {
           printf("Nao e bissexto");
       }
    }
}