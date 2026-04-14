#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);

    (n == 0) && printf("É zero\n");
    (n != 0) && printf("Não é zero \n");

    return 0;
}