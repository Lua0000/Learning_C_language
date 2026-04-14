#include <stdio.h>

int my_strlen(char *s)
{
    char *ptr = s;

    while (*s != '\0')
    {
        s++;
    }

    return (int)(s - ptr);
}

int main(void)
{
    char nome[100];

    printf("Introduza uma string:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("%d\n", my_strlen(nome));

    return 0;
}
