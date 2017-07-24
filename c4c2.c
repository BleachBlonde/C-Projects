/*
Gaige Chester
CECS 130 -01
Chapter 4 Challenge 2
*/

#include <stdio.h>

int main () {
	
	int start, stop, inc;
	
	start = 100;
	stop = 1;
	inc = 10;
	
	while (start>stop) {
		printf("Value: %d\n", start);
		start= start - 10;
	}
	
	system("PAUSE");
}
