#include <stdio.h>
#include <locale.h>


int main(void) {

    int n_horas;
    long n_seg;
    printf("Numero de horas: ");
    scanf("%d", &n_horas);
    n_seg = n_horas < 0? 0: n_horas * 3600L;
    printf("%d Horas tem %ld", n_horas, n_seg);
    return 0;

}

