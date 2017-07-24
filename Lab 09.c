/*
Gaige Chester
CECS 130-01
Lab 09
*/

#include <stdio.h>
#include <stdlib.h>

void loadMyIncome(char *);

main() {
	
	loadMyIncome("labText.txt");
	
	return 0;
}

void loadMyIncome(char *x) {
	FILE *fp;
	char readLine[81];
	
	char *filename = x;
	fp = fopen(filename, "r");
	
	if (fp!=NULL) {
		printf("%s was opened successfully!\n\n", filename);
		while (!feof(fp)) {
			fscanf(fp, "%s", readLine);
			printf("%s was read\n", readLine);
		}
	}
	else {
		printf("%s could not be opened, sorry!", filename);
	}
	
	fclose(fp);
}
