#include <stdio.h>

int main(void) {
    int N;
    printf("Digite um inteiro: ");
    scanf("%d", &N);

    if (N == 0 ) {
        printf("e igual a 0");
    } else {
        printf("Não é igual a zero.");
    }
}