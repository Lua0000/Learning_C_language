// prog0802.c
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    char *ptr = s;

    printf("Introduza uma String: ");
    fgets(s, sizeof(s), stdin);

    /* Remove o '\n' que o fgets deixa no final */
    s[strcspn(s, "\n")] = '\0';

    if (*ptr == '\0')
        return 0; /* String vazia */

    /* Imprimir a string normalmente */
    while (*ptr != '\0')
        putchar(*ptr++);

    putchar('\n');

    /* Volta para o último caractere (antes do '\0') */
    ptr--;

    /* Imprimir a string ao contrário */
    while (ptr >= s)
        putchar(*ptr--);

    putchar('\n');

    return 0;
}
