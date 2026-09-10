#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cpf, cpff, n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
	printf("Insira seu cpf: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
		
	n1 = n1*10;
	n2 = n2*9;
	n3 = n3*8;
	n4 = n4*7;
	n5 = n5*6;
	n6 = n6*5;
	n7 = n7*4;
	n8 = n8*3;
	n9 = n9*2;
	
	cpf = n1+n2+n3+n4+n5+n6+n7+n8+n9;
	
	cpf = cpf*10;
	cpf = cpf%11;
	

	
	n1 = (n1/10)*11;
	n2 = (n2/9)*10;
	n3 = (n3/8)*9;
	n4 = (n4/7)*8;
	n5 = (n5/6)*7;
	n6 = (n6/5)*6;
	n7 = (n7/4)*5;
	n8 = (n8/3)*4;
	n9 = (n9/2)*3;
	n10 = n10*2;
	
	cpff = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	
	cpff = cpff*10;
	cpff = cpff%11;
	
	printf("%d""%d", cpf, cpff);
	
	
	return 0;
}
