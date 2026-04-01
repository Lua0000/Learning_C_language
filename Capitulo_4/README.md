# 📘 Capítulo 4 – Questionario sobre C
## 1. Indique quais afirmações são Falsas e quais são Verdadeiras:

- 1.1 A condição dentro de um laço while e do...while tem que ser colocada sempre dentro de parênteses. -> ✔️
- 1.2 Os laços while e for executam SEMPRE, pelo menos uma vez, o corpo do laço. -> ❌
- 1.3 O laço do...while executa SEMPRE, pelo menos uma vez, o corpo do laço. -> ✔️
- 1.4 As três componentes, dentro de parênteses, do laço for são todas obrigatórias. -> ❌
- 1.5 As três componentes, dentro de parênteses, do laçof or são todas facultativas. -> ✔️
- 1.6 Quando em um laço for se tem que realizar mais do que uma carga inicial ou mais do que um incremento, as diversas instruções, em cada uma das componentes, devem serseparadas por vírgula e não ponto-e-vírgula, de forma a manter o   - --formato do laçofor. -> ✔️
- 1.7 A instrução de um laço é sempre executada. -> ❌
- 1.8 No laço for, o número de vezes que as cargas iniciais são executadas é sempre igual ao número
- de iterações do laço -> ❌
- 1.9 No laço for ou while, o número de vezes que a condição é testada é sempre igual ao número de
- iterações do laço. -> ❌
- 1.10 No laço for, o número de vezes que a instrução é executada é sempre igual ao número de vezes
- que é executada a pós-instrução ->  ❌
- 1.11 Um laço, quando está dentro de outro laço, necessita de chaves. -> ✔️
- 1.12 Não há limite para o número de laços dentro de outros laços. -> ✔️
- 1.13 No laço do...while, a instrução é sempre executada pelo menos uma vez. -> ✔️
- 1.14 Em todos os laços, a condição é sempre testada pelo menos uma vez. ->  ❌
- 1.15 Os laços while e do...while incrementam automaticamente a variável de controle. -> ❌
- 1.16 Os laços são executados até que a condição escrita se verifique. -> ✔️
- 1.17 O laço do...while aparece escrito menos frequentemente do que qualquer dos outros. -> ✔️
- 1.18 Um break, quando presente dentro de um laço, termina o programa. -> ❌
- 1.19 No laço while, antes de se executar a instrução continue, deve-se atualizar a variável de controle do laço. -> ✔️
- 1.20 Qualquer dos laços pode ser sempre escrito a partir do laço while. -> ✔️ 
## 2. Escreva genericamente o laço do...while como um laço while.
````c
int i = 0;
do {
    printf("%d", i);
    i++;
} while (i < 5);
`````
## 3. Escreva genericamente o laço for como um laço while.
````c
for(i = 0; i <= 5; i++) {
}
````
## 4. Escreva genericamente o laço while como um laço for.
````c
int i = 0; =
while (i < 10) { 
    printf("%d", i);
    i++; 
}
````
## 5. Qual a diferença de execução da instrução break quando presente em um for e em um while?

R = Não há diferença

## 6. Qual a diferença de execução da instrução continue quando presente em um/or e em um while?

R = A instrução continue funciona quase igual nos dois casos, mas o ponto para onde ela volta é diferente.

## 7. Reescreva o seguinte trecho de um programa, utilizando o laço while:
````c
for (i=l ; i<=20 ; i++)
  if (i==10)
    continue;
else
  printf("%d\n"ri);
````
R = 
````c
#include <stdio.h>

int main(void){
    int i = 0;
    while(i <=20){
        i++;
        if(i == 10)
            continue;
        printf("%d\n", i);
    }
}
````
## 8. Escreva um programa que coloque na tela meia árvore de natal com asteriscos. O número de ramos deverá ser introduzido pelo usuário.

R = 
````c
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
````

## 9.Altere o programa anterior de forma que, em vez de asteriscos, sejam escritas letras em cada nível, começando o nível inicial com a letra ‘A’.

R = 
````c
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
            printf("A\n");
            printf("BB\n");
            printf("CCC\n");
                break;
    case 4:
            printf("B\n");
            printf("BB\n");
            printf("CCC\n");
            printf("DDDD\n");
    case 5:
            printf("B\n");
            printf("BB\n");
            printf("CCC\n");
            printf("DDDD\n");
            printf("EEEEE\n");
    default:
        printf("Invalido");
        break;
    }
    
}
````

## 10. Escreva um programa que solicite um número ao usuário até que o valor deste esteja entre os valores 1 e 100.

R = 
````c
#include <stdio.h>


int main(void){
    
    int N = 1;
    printf("Digite um numero entre e 1 e 100: \n");
    scanf("%d", &N);
    while(N < 1 || N > 100) {
        printf("Errado");
        scanf("%d", &N);
    }
    
}
````

## 11. Escreva um programa em C que escreva na tela toda a tabela ASCII (0..255 chars), escrevendo em cada linha o código ASCII e o caractere correspondente.

R = 
```c
#include <stdio.h>

int main(void) {
    int i= 0;
    while (i <= 255)
    {
        i = i + 1;
        printf("%d -> %c\n", i, (char)i);
    }
     
}
````
