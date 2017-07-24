/*
Gaige Chester
CECS 130-01
Lab 06
*/

#include <stdio.h>

int findMin(int *, int);


main () {
	int iArray[7] = {1,-11,33,-17,0,6,8};
	int x;
	
	for (x=0; x<7; ++x){
		printf("The value of iArray[%d] is %d.\n", x, iArray[x]);
		
	}
	
	findMin(iArray, 5);
	printf("\nThe smallest element is: %d\n", findMin(iArray, 5));
	system("PAUSE");
}

int findMin(int *x , int size) {
	
	int minInt = x[0], i;
	
	for (i = 1; i < size; ++i) {
		if ( minInt > x[i]) {
			minInt = x[i];
		}
	}
	
	return minInt;	
}
