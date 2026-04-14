#include  <stdio.h>

int main() {
    int x;
    printf(("Digite um numero: "));
    scanf("%d", &x);
    if (x>=0) {
        printf("Numero Positivo");
    } else {
        printf("Numero Negativo");
    }
}