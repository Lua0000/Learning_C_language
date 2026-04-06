# 📘 Capítulo 4 – Questionario sobre C
## Exercicios dentro da Pasta teste !
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

int main(void)
{
    int i = 0;
    int C;
    while(i < 255){
        i++;
        printf("%d -> %c\n", i, (char)i);
        if (i == 20 || i == 40 || i == 60 || i == 80 || i == 100 || 
            i == 120 || i == 140 || i == 160 || i == 180 || i == 200 ||
        i == 220 || i == 240)
        {
            printf("Digite C e pressione <enter> para continuar!\n");
            scanf("%s", &C);
            if(C != 'c' || C != 'C') {
                continue;
            }
            
            
        } 
        
    }
}
````
## 12. Escrevaumprograma completo em C que solicite ao usuário dois númerosinteiros entre 0 e 255 e escreva na tela todos os caracteres da tabela ASCII cujos códigos variem entre os dois números introduzidos, escrevendo em cada linha o código ASCII e o caractere correspondente.

R = 
````c
#include <stdio.h>

int main(void){
    int i;
    int f;

    printf("Digite dois numeros inteiros entre 0 e 255> \n");
    printf("Inicio: ");
    scanf("%d", &i);
    printf("Fim: ");
    scanf("%d", &f);

    if(i <= f) {
        while (i <= f){
            printf("%d -> %c\n", i, (char)i);
            i++;
        }
    } 
    else {
        while (i >= f){
            printf("%d -> %c\n", i, (char)i);
            i--;
        }
    }

    return 0;
}
````

## 13. Qual a diferença (se existir) entre as duas seguintes instruções: x = ++i e x = i++? Dê exemplos.

13. Diferença entre x = ++i e x = i++
++i → pré-incremento (incrementa primeiro, depois usa)
i++ → pós-incremento (usa primeiro, depois incrementa)
````c
Exemplo:
int i = 5;
int x = ++i; // i vira 6, x = 6
int i = 5;
int x = i++; // x = 5, i vira 6
15. Se x estiver isolado, ++x e x++ são equivalentes?
````

✔ Sim.

Se não estiver dentro de uma expressão:
````c
x++;
++x;
````

👉 ambos só incrementam x em 1.

## 15. Pode usar ++ e -- em constantes?

❌ Não.

Ex:
````c
++5;   // inválido
10--;  // inválido
````
Só funciona em variáveis.

## 16. Qual a diferença entre a=-2 e a-=2?

```c
a = -2 → atribui o valor -2
a -= 2 → subtrai 2 do valor atual de a
Exemplo:
a = 5;
a = -2;   // a vira -2
a = 5;
a -= 2;   // a vira 3
````
## 17. Qual o resultado do seguinte programa:

```c
n = 0;
do {
    printf("...");
    n = n + 1;
} while (n != 0);
````
Análise:
começa com n = 0
entra no do-while pelo menos 1 vez
incrementa n → 1
condição n != 0 continua sempre verdadeira
loop infinito

✔ Resultado: loop infinito




