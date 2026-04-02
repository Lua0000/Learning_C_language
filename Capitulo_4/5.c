#include <stdio.h>


int main(void){
    
    int N = 1;
    printf("Digite um numero entre e 1 e 100: \n");
    scanf("%d", &N);
    while(N < 1 || N > 100) {
        printf("Errado");
        scanf("%d", &N);
    }
    
}