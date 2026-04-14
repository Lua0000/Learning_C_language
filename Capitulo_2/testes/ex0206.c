#include <stdio.h>

int main() {

	char nome[50];
	long long int cpf;
	short int idade;
	long long int pix;
	char pessoa_a_receber[50];
	long long int int_n_conta;
	
	
	printf("Digite seu nome: "); 
	scanf("%s", &nome);
	
	printf("Digite seu CPF: "); 
	scanf("%lld", &cpf);
	
	printf("Digite sua idade: "); 
	scanf("%hd", &idade);
	
	printf("Digite o valor do Pix: "); 
	scanf("%lld", &pix);
	
	printf("Nome da pessoa que vai receber o Pix: ");
	scanf("%s", &pessoa_a_receber);
	
	printf("Digite o numero da conta a receber o valor: ");
	scanf("%lld", &int_n_conta);
	printf("%s, do CPF: %lld de %hd anos, enviou um Pix de R$:%lld  Para %s N da Conta: %lld\n", nome, cpf, idade, pix, pessoa_a_receber, int_n_conta);
	
	//Atenção: Este Programa só funciona apenas com o primeiro nome
	
}