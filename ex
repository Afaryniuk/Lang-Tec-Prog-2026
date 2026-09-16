#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("%d e par", numero);
	}
	else {
		printf(" %d e impar", numero);
	}
    return 0;
}
