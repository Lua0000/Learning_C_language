#include <stdio.h>

int main(void)
{
    char nome[100];
    while(1){
        puts("Nome: ");
        fgets(nome, 100 ,stdin);
        if(nome[0] == '\0'){
            break;
        } else {
            printf("Nome Introduzido: %s", nome);
        }
    }
}
