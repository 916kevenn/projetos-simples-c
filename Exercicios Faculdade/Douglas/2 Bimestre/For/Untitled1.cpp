#include <stdio.h>
int main(){
	int num[5];
	int par = 0;
	int impar = 0;
	for(int i = 1 ; i<=5 ; i++){
		printf("Digite o Numero %i: ", i);
		scanf("%i", &num[i]);
	}
		for(int i = 1 ; i<=5 ; i++){
if(num[i] % 2 == 0){
	par++;
}
else{
	impar++;
}
}
printf("Par: %i\n",par);
printf("Impar: %i", impar);
}
