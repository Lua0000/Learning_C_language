#include <stdio.h>
#define DIM 3

#include <stdio.h>
#define DIM 3

int main()
{
    char velha[DIM][DIM] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    int i, j;

    velha[0][0] = 'X';
    velha[1][1] = '0';
    velha[0][2] = '0';
    velha[2][2] = '0';

    for(i = 0; i < DIM; i++)
    {
        for(j = 0; j < DIM; j++)
        {
            printf("%c", velha[i][j]);

 1)
                printf("|");
        }

        if(i < DIM - 1)
            printf("\n-----\n");
    }

    return 0;
}