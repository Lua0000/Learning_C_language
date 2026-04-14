#include <stdio.h>

int main(void)
{
    char nome[50], sobrenome[50];
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("Digite seu sobrenome:");
    scanf("%s", sobrenome);
    printf("Seu nome completo: %s %s\n", nome, sobrenome);
    return 0;
}
