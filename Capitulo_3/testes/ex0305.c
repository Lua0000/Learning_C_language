#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int x, y, tmp;
    printf("Introduza dois números: ");
    scanf("%d%d", &x,&y);

    if (x>y) {
        tmp = x;
        x = y;
        y = tmp;

    }
    printf("%d %d\n",x,y);
}