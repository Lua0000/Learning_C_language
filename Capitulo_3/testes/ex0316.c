#include <stdio.h>
#include <locale.h>

// PROGRAMA ESCRITO ERRADO PROPOSITALMENTE

int main(void) {
    setlocale(LC_ALL,"pt_BR");
    int num1, num2;
    char op;
    printf("Digite uma expressão: ");
    scanf("%d %c %d ", &num1, &op, &num2);
    switch(op) {
        case '+': printf("%d + %d = %d\n", num1, num2,num1+num2);
            break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case 'x':
        case 'X': printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case '/':
        case '//':
        case ':': printf("%d / %d = %d\n", num1, num2, num1/num2);
            break;
    }





}


// Forma correta:
// #include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL,"pt_BR");
    int num1, num2, res=0;
    char op;

    printf("Escreva uma Expressão: ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op) {
        case '+': res = num1 + num2;
            break;
        case '-': res = num1 - num2;
            break;
        case 'x':
        case 'X': res = num1 * num2;
            break;
        case '/':
        case '\\':
        case ':': res = num1 / num2;
            break;
    }

    printf("Num 1=%d %c Num 2=%d Resposta=%d\n", num1, op, num2, res);





}