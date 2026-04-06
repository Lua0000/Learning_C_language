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
            printf("*\n");
            printf("**\n");
            printf("***\n");
                break;
    case 4:
            printf("*\n");
            printf("**\n");
            printf("***\n");
            printf("****\n");
    case 5:
            printf("*\n");
            printf("**\n");
            printf("***\n");
            printf("****\n");
            printf("****\n");
    default:
        printf("Invalido");
        break;
    }
    
}