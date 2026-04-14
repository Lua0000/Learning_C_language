#include <stdio.h>
#include <string.h>

int mystrcmp(char *s1, char *s2){
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0'){
        i++;
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main(void)
{
    char nome[31];

    do {
        printf("Nome: ");
        fgets(nome, 31, stdin);

        // remove o \n
        nome[strcspn(nome, "\n")] = '\0';

    } while (mystrcmp(nome, "SAIR") != 0);

    puts("Terminou o programa!");

    return 0;
}
