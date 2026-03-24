#include <stdio.h>
#include <locale.h>

//ESTE PROGRAMA FOI ESCRITO PROPOSITALMENTE ERRADO PARA ESTUDO.

int main(void) {
    int a,b;
    printf("Introduza dois Números: ");
    scanf("%d%d",&a,&b);
    if (a>=b) {
        if (b>10) {
            printf("B é muito grande\n");
        } else {
            printf("A tem um valor negativo");
        }
    }
}