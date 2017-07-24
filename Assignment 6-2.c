/*
Gaige Chester
CECS 130-01
Assignment 6 Challenge 2
*/

#include <stdio.h>
#include <string.h>

char* findMin(char **, int);

int main() {
	int size = 3, i;
	char* cString[3];
		cString[0] = "Result";
		cString[1] = "fees";
		cString[2] = "dismal";
	    
	findMin(cString, 3);
	
	system("PAUSE");
    return 0;
}

char* findMin(char **x, int size) {
	char* minChar;
	int i;
	
	minChar = x[0];
	
	for (i=0;i<size;i++) {
		if (strcmp(minChar,x[i]) > 0){
			minChar = x[i];	
		}
	}
	
	printf("The first string will be: %s\n\n", minChar);
	return minChar;
}
