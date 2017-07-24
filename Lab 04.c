/*
Gaige Chester
CECS 130-01
Lab 04
*/

#include <stdio.h>

int main () {
	
	int num1, factorial=1, i;
	
	printf("Enter the number that you want the factorial of: ");
	scanf("%d", &num1);
	
	for (i=num1; i>0; i--) {
		factorial*=i;
	}
	
	printf("%d! is %d", num1, factorial);
	return(0);	
}

