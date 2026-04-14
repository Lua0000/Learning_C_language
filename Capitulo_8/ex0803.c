#include <stdio.h>

int my_strlen(char *s)
{
    char *ptr = s;
    while (*s != '\0')
        s++;
    return (int)(s - ptr);
}

int main(void)
{
    char s[100];
    char *ptr = s;

    printf("Introduza uma string: \n");
    fgets(s, sizeof(s), stdin);

    /* Remove o '\n' que o fgets deixa no final */
    s[my_strlen(s) - 1] = '\0';

    printf("%d\n", my_strlen(s));

    return 0;
}
