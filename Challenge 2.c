/*
Gaige Chester
CECS 130-01
Challenge 2
*/
#include <stdio.h>

main() {
	int a,b,x,y,f;
	
	printf("Enter values for a,b,x,y in that format: ");
	scanf("%d,%d,%d,%d",&a,&b,&x,&y);
	
	f= (a-b)*(x-y);
	printf("The value for the function f is %d", f);
	
	return(0);
	
}
