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

5. Associe os tipos aos formatos:

int → %d
float → %f
char → %c
long int → %ld
short int → %hd
signed long int → %ld

---

6. Verdadeiro ou falso:

a) Verdadeiro ✔️
b) Falso ❌
c) Verdadeiro ✔️
d) Verdadeiro ✔️
e) Falso ❌
f) Falso ❌
g) Falso ❌
h) Verdadeiro ✔️

---

7. Identifique os erros de compilação:

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

R = Uso incorreto do `scanf` (como se fosse `printf`)

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

R = `\n` no scanf faz o programa esperar mais entrada

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

9. Programa (dd/mm/aaaa):

```c
#include <stdio.
```
