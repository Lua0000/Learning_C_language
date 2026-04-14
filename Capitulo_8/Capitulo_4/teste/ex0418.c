#include <stdio.h>

int main(void){
    int i, n;
    printf("Introduza um N: ");
    scanf("%d", &n);
    for(i=n; ; i++){
        if(i % 10 == 0 ){
            break;
        } else {
            if(i % 3 == 0) {
                continue;
                printf("%d\n",i);
            }
            ;
        }
    }
}