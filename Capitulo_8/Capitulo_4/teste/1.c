#include <stdio.h>

int Num;

int main(void){
    do
    {
    printf("Digite um numero: ");
    scanf("%d", &Num);
    } while (Num < 100);
    {
        printf("Este numero e menor que 100");
    }
    
}