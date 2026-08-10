/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	char escolha;
	float Cu, Zn, Latao;
	printf("Quantidade em (K)g ou (G)ramas? ");
	scanf(" %c", &escolha);
	switch(escolha)
	{
	case'K':
	case'k':
		printf("Quantidade De Cobre: ");
		scanf("%f",&Cu);
		printf("Quantidade De Zinco: ");
		scanf("%f", &Zn);
		Latao = Cu + Zn;
		printf("%.2f Kg", Latao);
		break;
	case'G':
	case'g':
		printf("Quantidade De Cobre: ");
		scanf("%f",&Cu);
		printf("Quantidade De Zinco: ");
		scanf("%f", &Zn);
		Latao = Cu + Zn;
		printf("%.2f g", Latao);
break;
	}

	return 0;
}