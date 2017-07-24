/*
Gaige Chester
CECS 130-01
Assignment 07
*/

#include <stdio.h>
#include <stdlib.h>

main() {
	FILE *fp;
	char bookName[50];
	char *filename = "myBooksList.txt";
	char *book1 = "The Lost Symbol - Dan Brown";
	char *book2 = "The Host - Stephanie Meyer";
	int x;
	
	fp = fopen(filename, "w");
	
	printf("!!Warning, write mode will overwrite data!!\n\n");
	printf("Do you wish to continue?\n\t1)Yes\t2)No\n\nYour Choice: ");
	scanf("%d", &x);
	
	if (x==1) {
		
	if (fp!=NULL) {
		printf("\n%s was opened successfully!", filename);
		fprintf(fp, "%s\n", book1);
		fprintf(fp, "%s\n", book2);
		
	}
	
	else {
		printf("\nSorry the file could not be opened.");
	}
	}
	else {
		printf("\nGoodbye!");
	}
	
	
	fclose(fp);
	return 0;	
}
