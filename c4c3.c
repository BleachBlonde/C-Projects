/*
Gaige Chester
CECS 130 -01
Chapter 4 Challenge 3
*/

#include <stdio.h>

int main () {
	
	int start, stop, inc, i;
	
	printf("What is your starting point? ");
	scanf("%d", &start);
	printf("What is your stopping point? ");
	scanf("%d", &stop);
	printf("What is the increment value? ");
	scanf("%d", &inc);
	
	for (i=start; i>=stop; i-=inc) {
		printf("The value is: %d\n", i);
	} 
	
	system("PAUSE");
}
