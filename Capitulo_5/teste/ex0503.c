#include <stdio.h>

void linha(int num){
    int i;
    for(i= 1; i <= num; i++)
        putchar('*');
    putchar('\n');
}

int main(){
    linha(3);
    linha(5);
    linha(10);
    linha(6);
    linha(8);
    linha(50);
    linha(15);
}