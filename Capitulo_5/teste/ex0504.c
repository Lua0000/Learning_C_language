#include <stdio.h>

void linha(int num, char ch){
    int i;
    for(i= 1; i <=num; i++)
        putchar(ch);
    putchar('\n');
}

int main(){
    linha(3, '+');
    linha(5, '+');
    linha(8, '*');
    linha(1, '+');
    linha(10, 'x');
}