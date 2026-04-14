#include <stdio.h>

int main(void)
{
    char nome[50];
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin); // Pega o nome completo inves de apenas o primeiro nome;
    printf("Seu nome completo: %s\n", nome);
}
