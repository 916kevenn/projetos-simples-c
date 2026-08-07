/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float saldo;
	int opcao;
	printf("Digite seu Saldo: ");
	scanf("%f", &saldo);
	while(opcao != 0)
	{
	    printf("Sistema Caixa");
		printf("\n1 - Saldo\n");
		printf("2 - Depositar\n");
		printf("3 - Sacar\n");
		printf("0 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
		case 1:
			printf("Saldo: %.2f",saldo);
			break;
		case 2:
			float deposito;
			printf("Quantos reais deseja depositar? ");
			scanf("%f", &deposito);
			saldo += deposito;
			break;
		case 3:
			float sacar;
			printf("Quantos reais deseja sacar? ");;
			scanf("%f", &sacar);
			saldo -= sacar;
			break;
		}
	}
}