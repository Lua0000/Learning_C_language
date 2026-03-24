# 📘 Capítulo 3 – Questionario sobre C

## 1- Por que razão variáveis do tipo float não devem armazenar valores lógicos?

resposta  =  Pois váriaveis do tipo float são feitas para armazenar números reais (com casas decimais), enquanto
valores lógicos devem ser representados por tipos apropriados como bool ou int 

## 2- Indique quais, das seguintes afirmações, são verdadeiras e quais são falsas.

- 2.1 O else de um if é facultativo. ✔️
- 2.2 Num if são necessários parênteses em tomo da condição. ✔️
- 2.3 O if pode conter a palavra then opcionalmente. ❌ 
- 2.4 Tanto a componente if como a componente else só podem conter uma única instrução. ❌
- 2.5 O if tem que estar numa linha diferente do else. ❌
- 2.6 Na condição do if pode ser colocada uma constante, uma variável ou uma expressão. ✔️
- 
## 3. Como consegue uma instrução if-else saber onde termina o if e começa o else, ou se o if tem ou não else

resposta = Ela sabe pela estrutura do código, usando {} quando necessário, e o else sempre pertence ao if mais próximo. 

## 4. Um bloco pode ser constituído por apenas uma instrução?

resposta = Sim, um bloco pode ser constituído por apenas uma instrução. e isso faz não precisar dividor o codigo em {}.

## 5. Depois de um bloco é obrigatório o uso de ';' ?

resposta = Não

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
