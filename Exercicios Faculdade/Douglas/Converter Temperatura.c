
#include <stdio.h>
int main()
{
        int escolha, escolha2;
        float celsius, kelvin, fah;
while(escolha !=0){
        printf("CONVERSOR DE TEMPERATURA\n");
        printf("1 - CELSIUS - KELVIN\n");
        printf("2 - CELSIUS - FAHRENHEIT\n");
        printf("3 - KELVIN - FAHRENHEIT\n");
        printf("0 - SAIR\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        switch(escolha)
        {
case 0:
printf("Programa Encerrado");
break;
        case 1:
                printf("1 - CELSIUS TO KELVIN\n");
                printf("2 - KELVIN TO CELSIUS\n");
                printf("Escolha: ");
                scanf("%d", &escolha2);
                if(escolha2 == 1) {
                        printf("Temperatura: ");
                        scanf("%f", &celsius);
                        kelvin = celsius + 273;
                        printf("%.2f°K\n", kelvin);
                }
                else {
                        printf("Temperatura: ");
                        scanf("%f", &kelvin);
                        celsius = kelvin - 273;
                        printf("%.2f°C\n", celsius);
                }
                break;

        case 2:
                printf("1 - CELSIUS TO FAHRENHEIT\n");
                printf("2 - FAHRENHEIT TO CELSIUS\n");
                printf("Escolha: ");
                scanf("%d", &escolha2);
                if(escolha2 == 1) {
                        printf("Temperatura: ");
                        scanf("%f", &celsius);
                        fah = (celsius*1.8)+32 ;
                        printf("%.2f°F\n", fah);
                }
                else {
                        printf("Temperatura: ");
                        scanf("%f", &fah);
                        celsius = (fah - 32)/1.8;
                        printf("%.2f°C\n", celsius);
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
                        printf("%.2f°F\n", fah);
                }
                else {
                        printf("Temperatura: ");
                        scanf("%f", &fah);
                        kelvin = ((fah - 32) / 1.8) + 273.15;
                        printf("%.2f°K\n", kelvin);
                }
                break;


        }
}
return 0;
}