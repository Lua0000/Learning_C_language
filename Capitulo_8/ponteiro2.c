#include <stdio.h>

void Ardo(int Numero, int *ponteiro);
int main(void){

    int Numero = 13;
    int *ponteiro;
    ponteiro = &Numero;

    Ardo(Numero, ponteiro);

    *ponteiro = 90;

    Ardo(Numero, ponteiro);
    return 0;
}

void Ardo(int Numero, int *ponteiro){

    printf("Valor da Variavel Numero => %d\n", Numero);
    printf("Valor da Variavel Numero pelo ponteiro => %d\n", *ponteiro);

    printf("Endereco da Variavel Numero => %p\n", &Numero);
    printf("Endereco da Variavel Numero pelo ponteiro => %p\n", ponteiro);

}
