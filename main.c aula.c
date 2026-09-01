#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*
	int n;
	printf("entre com o numero");
	scnaf("%d", &n);
	// equivalente (n>= 1 && n <= 9)
	if(n<10 && n>0)
			// isso é interessante (!(n == 4 | | n == 6 | | n == 8 | | n == 9))
		if(n == 1 | | n == 2 | | n == 3| | n == 5 | | n == 7){
			printf("o dobro de %d = %d", n, (n*2));
	}else if(n%2 == 0)
		printf("%d+2 =%d", n, n+2);
	else
		printf("|%d|%d|%d|", n-1, n, n+1);

	else printf("_out_of_range");	
*/ 

	
	char letra;
	scanf("%c", &letra);
	if(letra == 'a')printf("a de amor");
	else if (letra=='b')printf("b de baixinho da xuxa");
	else if (letra== 'c')print("c de coração");

	
	
	char op;
	scanf ( "%c", &op);
	switch(op){
	
	case 'a': printf("opa ta falando com ele"); break;

	case 'b': printf("Benedito!"); break;

	case 'c': printf("É complicada a situação"); break;

	case 'd': printf("Tamo Junto"); break;
}

return 0;
	
	
}
