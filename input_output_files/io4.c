#include <stdio.h>

int main(void)
{
    FILE *fp;
    int x = 32;
    fp = fopen("output.txt", "w");
    fputc('B', fp);
    fputc('\n', fp);
    fputs("Hello Adries", fp);
    fputc('\n', fp);
    fputc('K', fp);
    fputc('\n', fp);
    fprintf(fp,"X = %d\n",x);
    fputs("Hello World\n", fp);
    fclose(fp);
}
