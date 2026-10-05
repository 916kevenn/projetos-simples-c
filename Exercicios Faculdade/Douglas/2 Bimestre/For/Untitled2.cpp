#include <stdio.h>
int main(){
float altura[6];
for(int i = 0; i<6 ; i++){
	printf("Altura Pessoa %d: ", i+1);
	scanf("%f", &altura[i]);
}

float maior = altura [0];
float menor = altura[0];

for(int i = 1 ; i< 6 ; i++){
	if(altura[i] > maior){
	maior = altura[i];
	}
	if(altura[i] < menor){
	menor = altura[i];
	}
}
printf("Maior Altura: %.2f\n", maior);
printf("Menor Altura: %.2f", menor);
return 0;
}

