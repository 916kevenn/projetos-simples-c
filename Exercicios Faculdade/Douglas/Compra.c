/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	float Valor, Total, Troco, Quantidade, Pago;
	printf("Valor do Produto: ");
	scanf("%f", &Valor);
	printf("Quantidade para comprar: ");
	scanf("%f", &Quantidade);
	Total = Valor*Quantidade;
	printf("Total = %.2f\n", Total);
	printf("Quantidade que voce ira pagar: ");
	scanf("%f", &Pago);
	if(Pago<Total) {
		printf("Valor Insuficiente");
	}
	else{
	Troco = Pago - Total;
	if(Troco == 0) {
		printf("Obrigado pela compra!");
	}
	else {
		printf("Obrigado pela Compra\n");
		printf("Troco = %.2f", Troco);

	}
	}
	return 0;
}