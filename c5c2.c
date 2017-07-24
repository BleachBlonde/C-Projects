/*
Gaige Chester
CECS 130-01
Chapter 5 Challenge 2
*/

#include<stdio.h>

int mod(int a, int b);
int max(int x, int y);

int main() {
	int x, y;
	
	printf("What is the first value? ");
	scanf("%d", &x);
	printf("What is the second value? ");
	scanf("%d", &y);
	
	printf("\n");
	mod(x,y);
	printf("\n");
	max(x,y);
	printf("\n");
	atm();
	
	return(0);
	system("PAUSE");
}

int mod(int a,int b) {
	int result1;
	
	result1 = a%b;
	printf("The modulo of %d and %d is: %d", a,b,result1);
	
}

int max(int a, int b) {
	int result2;
	
	if (a>b) {
		result2 = a;
	}
	else {
		result2 = b;
	}	
	
	printf("\nThe max between %d and %d is: %d\n", a,b,result2);
}

atm() {
	printf("What are you looking to do today?\n");
	printf("1) Deposit\t\t\t\t2) Withdraw\n");
	printf("3) Check Balance\t\t\t4) Pay a Bill");
	
}
