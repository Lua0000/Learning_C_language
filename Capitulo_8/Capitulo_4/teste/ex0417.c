#include <stdio.h>

int main(void){
    int i, j, n;
    char ch;
    printf("Introduza um Numero: ");
    scanf("%d", &n);
    printf("Introduza um char: ");
    scanf(" %c", &ch);
    for(i =1 ; i <= n; i++){
        for(j = 1; j <= n; j++){
            putchar(ch);
        putchar("\n");
        }
    }
}