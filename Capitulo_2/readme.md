# 📘 Capítulo 2 – Exercícios Corrigidos em C

1. Indique quais das seguintes declarações estão corretas:

a) y int; → Incorreta
b) int; → Incorreta
c) integerx; → Incorreta
d) inta, b; → Incorreto
e) float f, g, c; → Correto
f) char chl=ch2-A'; → Incorreto
g) char chi = 'A', ch2 = 'A'; → Correto

---

2. Uma variável inteira, quando é declarada, é sempre iniciada com:

a) 0
b) 1
c) Um valor aleatório
d) Um valor negativo

Resposta = **C**

---

3. Identificadores corretos e incorretos:

a) Valor → Correto
b) &XN2X → Incorreto
c) dez% → Incorreto
d) a+b → Incorreto
e) _Kabonga → Correto
f) MENOS → Correto
g) 10a → Incorreto
h) alO → Correto
i) main → Incorreto
j) F1 → Correto

---

4. O nome de uma variável:

a) deve indicar aquilo que ela armazena → Correto
b) deve ser o menor possível → Incorreto
c) deve ser o maior possível → Incorreto
d) deve ser o mais explícito possível → Correto
e) deve ser todo em maiúsculas → Incorreto
f) pode começar com underscore (_) → Correto
g) pode conter mais de um caractere → Correto

---

5. Associe os seguintes tipos aos correspondentes formatos de leitura e escrita.
int %e
float %ld
char %f
short int %d
long int %hd
signed long int %c
R = int = %d, float = %f, char = %c, long int = %ld, short int = %hd,  singed long int = %ld 

---
6. Indique quais das seguintes afirmações são verdadeiras e quais são falsas.
a) O tipo float reserva espaço em memória para um real com precisão simples, enquanto o tipo double reserva espaço para uma variável com precisão dupla. -> Verdadeiro ✔️
b) O tipo char pode ter os prefixos long e short. -> Falsa ❌
c) O tipo char pode ter os prefixos signed e unsigned. -> Verdadeiro ✔️
d) Uma variável declarada como unsigned pode comportar valores superiores a uma outra que seja declarada como signed. -> Verdadeiro ✔️
e) Uma variável do tipo char pode armazenar caracteres individuais ou conjuntos de caracteres também denominados por strings. -> Falso ❌
f) Uma variável do tipo char pode armazenar vários caracteres, desde que todos eles sejam caracteres ASCII. -> Falso ❌
g) Uma variável do tipo char pode armazenar vários caracteres, desde que sejam caracteres especiais. -> Falso ❌
h) O operador módulo (%) não pode ser utilizado em reais. -> Verdadeiro ✔️

--

7. Identifique os erros de compilação que seriam detectados nos seguintes programas:

7.1

```c
#include <stdio.h>
main () {
    int x, y, x;
}
```

R = Variável `x` declarada duas vezes

---

7.2

```c
#include <stdio.h>
main ()
{
    int x, y;
    float int = 5.23;
    printf ("%f",int);
}
```

R =

* `int` é palavra reservada
* tipo incorreto na declaração

---

7.3

```c
#include <stdio.h>
main ()
{
    int x=y=z=0;
    printf("%d %d %d \n",x,y,z);
}
```

R = Forma incorreta de declarar múltiplas variáveis
Correto:

```c
int x, y, z;
x = y = z = 0;
```

---

8. Possíveis erros de execução:

8.1

```c
#include <stdio.h>
main ()
{
    int n;
    scanf("Introduza um N° %d", &n);
    printf("O n° = %d\n", n);
}
```

R = Uso errado do `scanf` (parecendo `printf`)

---

8.2

```c
main ()
{
    int n;
    printf("Introduza um N");
    scanf("%d\n", &n);
    printf("O n° = %d\n",n);
}
```

R = `\n` no scanf causa espera extra

---

8.3

```c
#include <stdio.h>
main()
{
    int n;
    printf("Introduza um N");
    scanf("%f", &n);
    printf("O n° = %f\n",n);
}
```

R =

* tipo incorreto (`%f` com int)
* erros de string/aspas
* falta `int main()`

---

9. Programa (data dd/mm/aaaa):

```c
#include <stdio.h>

int main() {
    int Dia, Mes, Ano;

    printf("Digite uma data: ");
    scanf("%d", &Dia);

    printf("Digite um mes: ");
    scanf("%d", &Mes);

    printf("Digite um ano: ");
    scanf("%d", &Ano);

    printf("A data: %d/%d/%d\n", Dia, Mes, Ano);
    return 0;
}
```

---

10. Programa (aaaa-mm-dd → dd/mm/aaaa):

```c
#include <stdio.h>

int main() {
    int Ano, Mes, Dia;

    printf("Ano: ");
    scanf("%d", &Ano);

    printf("Mes: ");
    scanf("%d", &Mes);

    printf("Dia: ");
    scanf("%d", &Dia);

    printf("Formato AAAA-MM-DD: %d-%d-%d\n", Ano, Mes, Dia);
    printf("Formato DD/MM/AAAA: %d/%d/%d\n", Dia, Mes, Ano);

    return 0;
}
```
