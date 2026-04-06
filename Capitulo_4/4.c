#include <stdio.h>

int main(void){
    int Num_1 = 0;
    
    while (Num_1 == 0)
    {
        printf("Quantos ramos? ");
        scanf("%d",&Num_1);
    } switch (Num_1)
    {
    case 3:
            printf("A\n");
            printf("BB\n");
            printf("CCC\n");
                break;
    case 4:
            printf("B\n");
            printf("BB\n");
            printf("CCC\n");
            printf("DDDD\n");
    case 5:
            printf("B\n");
            printf("BB\n");
            printf("CCC\n");
            printf("DDDD\n");
            printf("EEEEE\n");
    default:
        printf("Invalido");
        break;
    }
    
}