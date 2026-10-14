#include <stdio.h>
int main(){
	int num;
 unsigned long long fatorial = 1;
printf("Digite um numero: ");
scanf("%d", &num);
for(int i = 1 ; i<=num ; i++){
	fatorial *= i;
}
printf("Fatorial: %llu", fatorial);
	return 0;
}
