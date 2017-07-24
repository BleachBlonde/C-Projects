/*
Gaige Chester
CECS 130-01
Lab 04
*/

#include <stdio.h>

int main() {
	
	int num1, factorial=1, i;
	
	printf("Enter a number to find the factorial of: ");
	scanf("%d", &num1);
	
	while(num1>0) {
		factorial*=num1;
		num1= num1 - 1;
	}
	
	printf("The answer is %d", factorial);
	return (0);
}

