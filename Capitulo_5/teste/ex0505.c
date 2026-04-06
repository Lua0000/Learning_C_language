#include <stdio.h>

int soma(int a, int b){
    return a+b;
}

int multip(int a, int b){
    return a*b;
}

int main(){
    int n, i, total;

    printf("Digite dois inteiros: \n");
    scanf("%d%d", &n, &i);

    total = soma(n, i);
    printf("%d + %d = %d\n", n, i, total);
    total = multip(n, i);
    printf("%d X %d = %d\n", n, i, total);

    return 0;
}