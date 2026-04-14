#include <stdio.h>
int main(void)
{
    FILE *nf;
    int c;
    nf = fopen("Ola.txt", "r");
    while((c = fgetc(nf)) != EOF)
        printf("%c\n",c);
    fclose(nf);
}
