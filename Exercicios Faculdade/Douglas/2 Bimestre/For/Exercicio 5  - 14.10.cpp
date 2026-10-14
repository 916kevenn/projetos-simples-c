#include <stdio.h>
int main(){
	int base, expo;
	int resultado = 1;
	printf("Base: ");
	scanf("%d", &base);
	printf("Expoente: ");
	scanf("%d", &expo);
	for(int i = 1 ; i<=expo; i++){
		resultado *= base;
	}
	printf("Resultado: %d", resultado);
}
