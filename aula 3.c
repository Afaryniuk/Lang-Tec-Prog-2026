#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// exercicio1
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro Valor: ");
	scanf("%d", &primeiro);
	printf("Digite o primeiro Valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d" , primeiro, segundo);
	
	// exercio2
	double valor;
    
    printf("Digite um valor real: \n");
    scanf("%lf", &valor);
    
    printf("Notacao cientifica: %e \n", valor);

	// exercicio 3
    int n, res;
    int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, bit_1;
	printf("insira o valor a ser convertido: ");
    scanf("%d", &n);// -> 41
    	
    bit_64 = n%2;//-> 1
    res = n/2;//-> 20
    
    bit_32 = res%2;//-> 0
    res = res/2;//-> 20
    	
    bit_16 = res%2;//->0
    res = res/2;
   		
    bit_8 = res%2;//->1
    res = res/2;
    
    bit_4 = res%2;
    res = res/2;
    	
	bit_2 = res%2;
    res = res/2;
    		
   printf("O numero %d em bin = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64 );
    
    return 0
		}
