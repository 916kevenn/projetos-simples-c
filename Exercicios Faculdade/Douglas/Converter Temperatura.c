/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int escolha, escolha2;
	float celsius, kelvin, fah;
	printf("CONVERSOR DE TEMPERATURA\n");
	printf("1 - CELSIUS - KELVIN\n");
	printf("2 - CELSIUS - FAHRENHEIT\n");
	printf("3 - KELVIN - FAHRENHEIT\n");
	printf("Escolha: ");
	scanf("%d", &escolha);
	switch(escolha)
	{
	case 1:
		printf("1 - CELSIUS TO KELVIN\n");
		printf("2 - KELVIN TO CELSIUS\n");
		printf("Escolha: ");
		scanf("%d", &escolha2);
		if(escolha2 == 1) {
			printf("Temperatura: ");
			scanf("%f", &celsius);
			kelvin = celsius + 273;
			printf("%.2f°K", kelvin);
		}
		else {
			printf("Temperatura: ");
			scanf("%f", &kelvin);
			celsius = kelvin - 273;
			printf("%.2f°C", celsius);
		}
		break;

	case 2:
		printf("1 - CELSIUS TO FAHRENHEIT\N");
		printf("2 - FAHRENHEIT TO CELSIUS\N");
		printf("Escolha: ");
		scanf("%d", &escolha2);
		if(escolha2 == 1) {
			printf("Temperatura: ");
			scanf("%f", &celsius);
			fah = (celsius*1.8)+32 ;
			printf("%.2f°F", fah);
		}
		else {
			printf("Temperatura: ");
			scanf("%f", &fah);
			celsius = (fah - 32)/1.8;
			printf("%.2f°C", celsius);
		}
		break;
	case 3:
		printf("1 - KELVIN TO FAHRENHEIT\n");
		printf("2 - FAHRENHEIT TO KELVIN\n");
		printf("Escolha: ");
		scanf("%d", &escolha2);
		if(escolha2 == 1) {
			printf("Temperatura: ");
			scanf("%f", &kelvin);
			fah = (kelvin - 273.15) * 1.8 + 32;
			printf("%.2f°F", fah);
		}
		else {
			printf("Temperatura: ");
			scanf("%f", &fah);
			kelvin = ((fah - 32) / 1.8) + 273.15;
			printf("%.2f°K", kelvin);
		}
		break;


	}
	return 0;
}