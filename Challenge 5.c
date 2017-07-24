/*
Gaige Chester
CECS 130-01
Challenge 5
*/
#include <stdio.h>

main() {
	int rate, comm, salePrice, cost;
	
	printf("Enter your rate: ");
	scanf("%d",&rate);
	
	printf("Enter your Cost: ");
	scanf("%d", &cost);
	
	printf("Enter your Sale Price: ");
	scanf("%d", &salePrice);
	
	comm= rate*(salePrice-cost);
	printf("You have made a total of %d in commission", comm);
	
	return(0);
}
