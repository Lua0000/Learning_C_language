#include <stdio.h>

int main(void){
    int i;

    for(i = 1; i <= 100; i++){
        if(i == 60)
            break;

        if(i % 2 == 1)
            continue;

        printf("%2d\n", i);
    }

    printf("Fim do laco\n");

    return 0;
}