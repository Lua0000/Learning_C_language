#include <stdio.h>

int main(void)
{
    int x = 5, *px = &x;
    float y = 5.0, *py = &y;
    long z = 6, *pz = &z;
    printf("------------------------------\n");
    printf("Salta 4 bytes pois int é 4\n");
    printf("%d %ld\n",x, (long)px);
    printf("%d %ld\n", x+1, (long)(px+1));
    printf("------------------------------\n");
    printf("Salta 4 bytes pois float é 4\n");
    printf("%f %ld\n",y, (long)py);
    printf("%f %ld\n", y+1, (long)(py+1));
    printf("------------------------------\n");
    printf("Salta 8 bytes pois long é 8\n");
    printf("%ld %ld \n", z, (long)pz);
    printf("%ld %ld \n",z+1, (long)(pz+1));


}
