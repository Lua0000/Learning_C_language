#include <stdio.h>

int main(void)
{
    char opcao;

    do
    {
        printf("\tMENU PRINCIPAL\n");
        printf("\n\t\t[C] Clientes");
        printf("\n\t\t[F] Fornecedores");
        printf("\n\t\t[E] Encomendas");
        printf("\n\t\t[S] Sair");
        printf("\n\n\t\tOpção: ");

        scanf(" %c", &opcao); 
        switch (opcao)
        {
            case 'c':
            case 'C':
                puts("Opção CLIENTES");
                break;

            case 'f':
            case 'F':
                puts("Opção FORNECEDORES");
                break;

            case 'e':
            case 'E':
                puts("Opção ENCOMENDAS");
                break;

            case 's':
            case 'S':
                break; // sai do loop

            default:
                puts("Opção INVÁLIDA!!!");
        }

        printf("\nPressione ENTER para continuar...");
        getchar(); 
        getchar(); 

    } while (opcao != 's' && opcao != 'S');

    return 0;
}