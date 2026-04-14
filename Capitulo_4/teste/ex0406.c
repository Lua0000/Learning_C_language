#include <stdio.h>

int main(void){
    int n, num;
    num = 1;
    while (num <= 5)
    {
        n = 1;
        while (n <= 10)
        {
           printf("%d x %d = %d\n", num, n, num*n);
           n = n + 1;
        }
        num = num + 1;
        putchar('\n');
    }
    
}