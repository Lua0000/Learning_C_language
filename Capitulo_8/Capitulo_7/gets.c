#include <stdio.h>

int main(void)
{
    char nome[10]; // bem pequeno de propósito

    printf("Digite um nome curto: ");
    gets(nome); // ⚠️ perigoso

    printf("Nome digitado: %s\n", nome);

    return 0;
}
