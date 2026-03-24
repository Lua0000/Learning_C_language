#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if(x!=0) {
        printf("%d Não é zero", x);
    } else {
        printf("%d É zero", x);
    }
}