#include <stdio.h>
int main(void){
    int Numero = 321308915;
    int *ponteiro; ponteiro = &Numero;
    printf("Valor da variavel Numero = %d\n", Numero);
    printf("Endereco da variavel Numero = %p\n", &Numero);
    printf("------------------------------------------------------------\n");
    printf("Valor da variavel apontada pelo ponteiro = %d\n", *ponteiro);
    printf("Endereco da Variavel apontado pelo ponteiro = %p\n", ponteiro);
    printf("Endereco do Ponteiro = %p\n", &ponteiro);
    printf("------------------------------------------------------------\n");
    printf(">>>>> Atualizando valor da Variavel Numero com um ponteiro <<<<<<\n");
    *ponteiro = 666;
    printf("Novo valor de Numero = %d\n", *ponteiro);
    printf("------------------------------------------------------------\n");
    printf("Valor da variavel apontada pelo ponteiro = %d\n", *ponteiro);
    printf("Endereco da Variavel apontado pelo ponteiro = %p\n", ponteiro);
    printf("Endereco do Ponteiro = %p\n", &ponteiro);
    printf("------------------------------------------------------------\n");
    return 0;
}
