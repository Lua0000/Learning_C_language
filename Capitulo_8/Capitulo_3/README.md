# 📘 Capítulo 3 – Questionario sobre C

## 1- Por que razão variáveis do tipo float não devem armazenar valores lógicos?

resposta  =  Pois váriaveis do tipo float são feitas para armazenar números reais (com casas decimais), enquanto
valores lógicos devem ser representados por tipos apropriados como bool ou int 
---

## 2- Indique quais, das seguintes afirmações, são verdadeiras e quais são falsas.

- 2.1 O else de um if é facultativo. ✔️
- 2.2 Num if são necessários parênteses em tomo da condição. ✔️
- 2.3 O if pode conter a palavra then opcionalmente. ❌ 
- 2.4 Tanto a componente if como a componente else só podem conter uma única instrução. ❌
- 2.5 O if tem que estar numa linha diferente do else. ❌
- 2.6 Na condição do if pode ser colocada uma constante, uma variável ou uma expressão. ✔️
---
## 3. Como consegue uma instrução if-else saber onde termina o if e começa o else, ou se o if tem ou não else

resposta = Ela sabe pela estrutura do código, usando {} quando necessário, e o else sempre pertence ao if mais próximo. 
---
## 4. Um bloco pode ser constituído por apenas uma instrução?

resposta = Sim, um bloco pode ser constituído por apenas uma instrução. e isso faz não precisar dividor o codigo em {}.
---
## 5. Depois de um bloco é obrigatório o uso de ';' ?

resposta = Não
---
## 6. [Exercício de Exame]

Existe alguma diferença no funcionamento dos seguintes trechos?
```c
if (x==0) {
  printf("");
} else {
  	printf("Y");

if (x=0) {
  printf("x");
} else {
  	printf("Y");
```
resposta = Sim, o primeiro código verificado se o Valor de x é identico a 0, e na segunda a variavel X recebe 0
---
## 7. [Exercício de Exame]
A indentação facilita o processo de
- a) Compilação
- b) Linkagem
- c) Execução
- d) Programação  

resposta = d
---
## 8. Um programa indentado é, em geral:
- a) Mais rápido de executar que outro que não o seja.
- b) Mais lento de executar que outro que não o seja.
- c) Mais legível que outro que não seja indentado.
- d) Menos legível que outro que não o seja.

resposta = c
---
## 9. [Exercício de Exame] Sempre que um compilador detecta um código mal indentado:
- a) Emite um erro.
- b) Emite um "WARNING".
- c) Escreve o arquivo corretamente indentado.
- d) Um compilador não faz qualquer tipo de verificação da indentação

resposta = d
---
##10. Indique duas vantagens e duas desvantagens do if-else em relação ao switch.

resposta = A primeira vantagem é que o if else permite usar qualquer tipo de comparação, >, <, >=, <=, e combinação ||, &&, Funciona com qualquer tipo de dado
Você pode usar com int, float, char, ponteiros, as desvantagens comparadas ao switch é 1. Menos organizado para muitos casos fixos
Quando há muitas opções (tipo menu: 1, 2, 3, 4...), o switch fica mais limpo e fácil de ler, outra desvantagem é que pode ser menos eficiente (em alguns casos)
Um if-else com muitas condições pode ser mais lento, enquanto o switch pode ser otimizado pelo compilador.
---
##11. Será que a instrução break, quando apresentada dentro de um if, passa a execução automaticamente
para o else?

resposta = Não, O break é usado para interromper estruturas de repetição (for, while, do-while) ou um switch.
quando executado, ele sai imediatamente da estrutura em que está, não tendo relação direta com o if-else.
---
## 12. Qual o valor lógico que as seguintes expressões enviam para o if
- a) if (10 == 5) -> false
- ) if ( (2 + 3) == - ( -2 -3) -> True
- c) if (x = 5) -> True
- d) if (x = 0) -> False
---
## 13. Supondo x= 4, y= 6 e z= -1, qual o valor lógico das seguintes expressões:
- a) if (x == 5) false
- ) if (x == 5 || z<0) true
- c) if (y-x+z-1) false
- d) if (x == 4 || y>= z && ! (z) ) true
---
## 14. Escreva, utilizando um único if, o seguinte código.
````c
if (x == 0)
  if (y <= 32)
    printf("Sucesso!!!”)
````
resposta =
````c
if (x == 0 && y <= 32)
    printf("Sucesso!!!");
``````
---
## 15. Identifique os erros de compilação que seriam detectados nos seguintes programas.

##15.1
````c
#include <stdio.h>
main () {
int x;
if (x==0)
  break;
else
  printf("X não é zero \n") ;
}
````
resposta = Uso inválido do break fora de estruturas de repetição ou fora do switch
---
## 15.2 
````c 
#include <stdio.h>
main () {
int x;
if (x==0) then
  printf("X é zero \n");
else
  printf(”X não é zero \n");
}
`````

resposta = Na linguagem C não existe then
---
##15.3 
````c
#include <stdio.h>
main () {
int x;
switch (x)
{
  case 1: printf("um");
break;
  case 2: printf("dois");
break;
  else: printf("Nem um nem dois");
}
````


resposta = em C o switch não usa else, o correto é usar default, 

## 16. Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a zero.
```c
#include <stdio.h>

int main(void) {
    int N;
    printf("Digite um inteiro: ");
    scanf("%d", &N);

    if (N == 0 ) {
        printf("e igual a 0");
    } else {
        printf("Não é igual a zero.");
    }
}
````
## 16.2
````c 
#include <stdio.h>

int main(void) {
    int N;
    printf("Digite um Inteiro: ");
    scanf("%d", &N);
    if (N == 0? printf("É Zero"): printf("Não é zero"));
}
````
## 16.3
````c
#include <stdio.h>
int main(void) {

    int R;
    printf("Digite um inteiro: ");
    scanf("%d", &R);
    switch (R) {
        case 0: printf("E zero\n");
                break;
            default:
            printf("Nao e zero\n");

    }

}
````
## 16.4
````c
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);

    (n == 0) && printf("É zero\n");
    (n != 0) && printf("Não é zero \n");

    return 0;
}
`````
---
## 17. Reescreva o programa anterior com um switch.
````c
#include <stdio.h>
int main(void) {

    int R;
    printf("Digite um inteiro: ");
    scanf("%d", &R);
    switch (R) {
        case 0: printf("E zero\n");
            break;
        default:
            printf("Nao e zero\n");

    }

}
````

---
## 18. Escreva um programa que verifique se um ano é bissexto ou não.
```` c
#include <stdio.h>

int main(void) {
    int ano;
    printf("Digite o ano para saber se e bissexto: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0) {
        printf("E bissexto\n");

    } else {
       if (ano % 400 == 0) {
           printf("e bissexto");
       } else {
           printf("Nao e bissexto");
       }
    }
}
````

## 19. Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 28 dias).
- 19.1 Usando apenas a instrução de teste if-else.
 ```` c
 #include <stdio.h>


int main(void) {

    int mes;
    printf("Introduza o mes 1-12: ");
    scanf("%d", &mes);
    if (mes == 2) {
        printf("O mes %d tem 28 dias\n", mes);
    } else {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8|| mes == 10 || mes == 12) {
            printf("O mes %d tem 31 dias\n", mes);
        } else {
            printf("O mes %d tem 30 dias\n", mes);
        }
    }
}
 ````
- 19.2 Usando o switch.
```` c
#include <stdio.h>
#include <stdio.h>


int main(void) {
    int mes;
    printf("Introduza o mes 1-12: ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("O mes %d tem 31 dias", mes);
            break;
        case 4:
        case 6:
        case 9:
        case 11: printf("O mes %d tem 30 dias", mes);
            break;
        case 2: printf("O mes %d tem 28 dias", mes);
            break;
            default: printf("Digite um valor valido \n");

    }
}
````
- 19.3 Usando o switch sem qualquer break.
````c
#include <stdio.h>

int main() {
    int mes, n_dias = 0;

    printf("Introduza o número do mês 1-12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_dias = 31;
        case 4:
        case 6:
        case 9:
        case 11:
            if (n_dias == 0) n_dias = 30;
        case 2:
            if (n_dias == 0) n_dias = 28;
        default:
            if (mes < 1 || mes > 12) {
                printf("mes invalido\n");
                return 0;
            }
    }

    printf("O mês %d tem %d dias.\n", mes, n_dias);

    return 0;
}
````
---
## 20. Escreva um programa que leia uma data e verifique se esta é válida ou não.
````c
#include <stdio.h>

int main() {
    int dia, mes, ano, n_dias = 0;
    printf("Digite uma data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch(mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            n_dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            n_dias = 30;
            break;
        case 2:
            n_dias = 28;
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
                n_dias = 29;
            break;
        default:
            n_dias = 0;
    }

    if (dia < 1 || dia > n_dias || mes < 1 || mes > 12 || ano < 1 || ano > 9999)
        printf("Data invalida\n");
    else
        printf("%d/%d/%d e valido\n", dia, mes, ano);

    return 0;
}
````
----
