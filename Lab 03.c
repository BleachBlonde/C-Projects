/*
Gaige Chester
CECS 130 - 01
Lab 03
*/

#include <stdio.h>

main() {
	int x, y;
	
	printf("Enter the two parts of the coordinate in the form (x,y): ");
	scanf("%d, %d", &x, &y);
	
	if (x > 0) {
		if (y > 0) {
			printf("The point is in the First Quadrant.");
		}
		else {
			printf("The point is in the Fourth Quadrant.");
		}
	}
	else {
		if (y > 0) {
			printf("The point is in the Second Quadrant.");
		}
		else {
			printf("The point is in the Third Quadrant.");
		}
	}
		
}
