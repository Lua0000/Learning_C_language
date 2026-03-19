# 📘 Capítulo 1 – Exercícios Corrigidos em C

1. Qual a função que deve estar presente em todos os programas em C?
   R = `main()`

2. Como devem terminar todas as instruções em C?
   R = Em ponto e vírgula `;`

3. Como é delimitado um bloco em C?
   R = Entre chaves `{}`

4. A função printf é parte integrante da linguagem C?
   R = A função `printf` faz parte da biblioteca `stdio.h`

5. Para que serve a linha `#include <stdio.h>` num programa?
   R = Biblioteca de entrada e saída de dados

6. A extensão `.h` indica que o arquivo correspondente é composto por...?
   R = header

7. Os arquivos com extensão `.h` são também conhecidos por...?
   R = Header files

8. Por que razão não se utilizou a linha `#include <stdio.h>` no programa progOlOl.c?
   R = Pois o programa não faz nada

9. Dentro de uma string pode-se usar letras maiúsculas? Justifique.
   R = Sim, pois armazenam dados como nomes, cidades e frases

10. Qual o significado de stdio?
    R = standard input/output

---

11. Identifique os erros de compilação:

11.1

```c
#include <stdio.h>
Main ()
{
    printf ("Hello World");
}
```

R = Função incorreta → correto: `int main()`

11.2

```c
#include <stdio.h>
main
{
    printf("Hello World");
}
```

R = Falta `()` e tipo → correto: `int main()`

11.3

```c
#include <stdio.h>
main ()
{
    print ("Hello World")
```

R = `print` incorreto (correto: `printf`), falta `;` e `}`

11.4

```c
#include <stdio.h>
main ()
{
    printf("Hello”) (" World");
```

R = Uso incorreto do `printf` e falta `}`

11.5

```c
#include <stdio.h>
main ()
{
    printf ("Hello World");
```

R = Falta `return 0;` e `}`

11.6

```c
#include <stdio.h>
main ()
{
    printf("Hello World");
}
```

R = Deve ser `int main()`

11.7

```c
#include <stdio.h>
main ()
{
    printf(Hello World);
}
```

R = Falta aspas `""` e `int main()`

11.8

```c
#include <stdio.h>
main ()
{
    printf("Hello World")
}
```

R = Falta `;`

11.9

```c
include <stdio.h>
main ()
{
    printf("Hello World");
}
```

R = Falta `#` em `#include`

11.10

```c
#include <stdio.h>
main ()
{
    printf(’Hello World’);
}
```

R = Deve usar aspas duplas `"`

---

12. Os comentários devem ser escritos
a) Antes de qualquer instrução do programa.
b) Depois de todas as instruções.
c) Antes do main.
d) Sempre que o programador ache necessário ou conveniente.

Resposta = D 

13. Um programa em C, que tenha comentários no seu código, é, em relação a outro que não os tenha,
a) Mais rápido para executar.
b) Mais lento para executar.
c) Executado praticamente à mesma velocidade, pois os comentários exige muma utilização ínfima
da CPU.
d) Executado à mesma velocidade, pois os comentários são simplesmente ignorados pelo compilador, não havendo qualquer reflexo deles no tempo de execução.

Resposta = D 

14. Indique se são verdadeiras ou falsas as seguintes afirmações:
Os Comentários
a) só podem ocupar uma única linha. falso
b) podem ocupar várias linhas. verdadeiro 
c) podem conter outros comentários dentro. verdadeiro
d) começam por /* e terminam com /.* verdadeiro 
e) não têm qualquer influência na velocidade de execução de um programa. verdadeiro 
f) têm que começar no início de uma linha. falso
g) quando ocupam apenas uma linha não precisam terminar com /.* verdadeiro 

---

15.15. Escreva um programa que coloque na tela a seguinte frase:
Bem-vindos ao /Mundo\ da programação em "C"
Programa:

```c
#include <stdio.h>

int main(){
    printf("Bem-vindo ao ");
    printf(" /mundo\\ ");
    printf("da programacao em ");
    printf(" \"C\" ");
    return 0;
}
```

---

16. Programa:

```c
#include <stdio.h>

int main() {
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");
    printf(" /|\\ ");
    return 0;
}
```

---

17. Programa:

```c
#include <stdio.h>

int main() {
    printf("Total        =      100%% \n");
    printf("IVA          =      17%% \n");
    printf("IRS          =      15%% \n");
    printf("-------------------------\n");
    printf("Liq.         =      68%% \n");
    return 0;
}
```

---

18. Diferença entre `puts` e `printf`:

```c
#include <stdio.h>

int main() {
    puts("Hello World");
    return 0;
}
```

Diferença:
`puts` imprime apenas uma string simples.
`printf` permite formatação (`%d`, `%f`, etc).
