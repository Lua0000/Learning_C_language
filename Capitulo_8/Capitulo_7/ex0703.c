#include <stdio.h>

int main(void)
{
    char nome[50];
    printf("Introduza seu nome: ");
    fgets(nome, 50, stdin);
    printf("Nome completo: %s", nome);
}
