#include <stdio.h>

int main(){

    float sal[13];
    float total;
    int i;

    for(i=1; i<=12; i++){
        printf("Introduza o salario do mes %d: ",i);
        scanf("%f",&sal[i]);
    }

    puts("Mes       Valor");
    for(i=1, total=0.0; i<=12 ; i++){
        printf("%3d     %9.2f\n",i,sal[i]);
    }

    printf("Total anual: %9.2f\n", total);

}