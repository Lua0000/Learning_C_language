# 📘 Capítulo 2 – Questionário sobre C

## 1. Indique quais das seguintes declarações estão corretas

- `y int;` → **Incorreta**
- `int;` → **Incorreta**
- `integerx;` → **Incorreta**
- `inta, b;` → **Incorreto**
- `float f, g, c;` → **Correto**
- `char chl=ch2='A';` → **Incorreto**
- `char chi = 'A', ch2 = 'A';` → **Correto**

---

## 2.Uma variável inteira, quando é declarada, é sempre iniciada com ...
- a) 0 (Zero)
- b) 1 (Um)
- c) Um valor aleatório
- d) Um valor negativo:

**Resposta:** **c) Um valor aleatório**

---

## 3. Indique, na seguinte lista, quais os identificadores corretos e incorretos de variáveis:


- `Valor` → **Correto**
- `&XN2X` → **Incorreto**
- `dez%` → **Incorreto**
- `a+b` → **Incorreto**
- `_Kabonga` → **Correto**
- `MENOS` → **Correto**
- `10a` → **Incorreto**
- `alO` → **Correto**
- `main` → **Incorreto**
- `F1` → **Correto**


---

## 4. O nome de uma variável:

- deve indicar aquilo que ela armazena → **Correto**
- deve ser o menor possível → **Incorreto**
- deve ser o maior possível → **Incorreto**
- deve ser o mais explícito possível → **Correto**
- deve ser todo em maiúsculas → **Incorreto**
- pode começar com underscore (`_`) → **Correto**
- pode conter mais de um caractere → **Correto**

---

## 5. Associe os seguintes tipos aos correspondentes formatos de leitura e escrita

| Tipo              | Formato |
|-------------------|---------|
| `int`             | `%d`    |
| `float`           | `%f`    |
| `char`            | `%c`    |
| `long int`        | `%ld`   |
| `short int`       | `%hd`   |
| `signed long int` | `%ld`   |

---

## 6. Indique quais das seguintes afirmações são verdadeiras e quais são falsas

- **a)** O tipo `float` reserva espaço em memória para um real com precisão simples, enquanto o tipo `double` reserva espaço para uma variável com precisão dupla.  
  → **Verdadeiro** ✔️

- **b)** O tipo `char` pode ter os prefixos `long` e `short`.  
  → **Falso** ❌

- **c)** O tipo `char` pode ter os prefixos `signed` e `unsigned`.  
  → **Verdadeiro** ✔️

- **d)** Uma variável declarada como `unsigned` pode comportar valores superiores a uma outra que seja declarada como `signed`.  
  → **Verdadeiro** ✔️

- **e)** Uma variável do tipo `char` pode armazenar caracteres individuais ou conjuntos de caracteres também denominados por strings.  
  → **Falso** ❌

- **f)** Uma variável do tipo `char` pode armazenar vários caracteres, desde que todos eles sejam caracteres ASCII.  
  → **Falso** ❌

- **g)** Uma variável do tipo `char` pode armazenar vários caracteres, desde que sejam caracteres especiais.  
  → **Falso** ❌

- **h)** O operador módulo (`%`) não pode ser utilizado em reais.  
  → **Verdadeiro** ✔️

---

## 7. Identifique os erros de compilação

### 7.1
```c
#include <stdio.h>
main () {
    int x, y, x;
}
```
Erro: Variável x declarada duas vezes.

### 7.2 
````c
#include <stdio.h>
main ()
{
    int x, y;
    float int = 5.23;
    printf ("%f",int);
}
````
Erros:

int é palavra reservada
Tipo incorreto na declaração

### 7.3 
````c
#include <stdio.h>
main ()
{
    int x=y=z=0;
    printf("%d %d %d \n",x,y,z);
}
`````
Correção:
```c
    int x, y, z;
    x = y = z = 0;
````
8. Possíveis erros de execução
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
Erro: Uso errado do scanf (está sendo usado como se fosse printf).

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
Erro: \n no scanf causa espera extra de entrada.

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
Erros:

Tipo incorreto (%f com variável int)
Falta de #include <stdio.h> em alguns casos
main() deveria ser int main()

9. Escreva umprograma que solicite ao usuário uma determinada data e amostre em seguida no formato
dd/mm/aaaa
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
10. Escreva um programa que solicite ao usuário uma determinada data no formato aaaa-mm-dd e a
mostre em seguida no formato dd/mm/aaaa
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
