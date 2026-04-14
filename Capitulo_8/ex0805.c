#include <stdio.h>

int main(void)
{
    int x = 5;
    int *ptx;
    int **pt_ptx;

    ptx = &x;
    pt_ptx = &ptx;

    printf("x = %d | &x = %p\n", x, (void*)&x);
    printf("*ptx = %d | ptx = %p\n", *ptx, (void*)ptx);
    printf("**pt_ptx = %d | *pt_ptx = %p\n", **pt_ptx, (void*)*pt_ptx);

    return 0;
}
