/*
Gaige Chester
CECS 130-01
Assignment 07
*/

#include <stdio.h>
#include <stdlib.h>

char loadMySongsList(char *);

main() {
	loadMySongsList("songs.txt");
}

char loadMySongsList(char *x) {
	FILE *fp;
	
	char songBuff[133];
	char *filename = x;
	
	fp = fopen(filename, "r");
	
	if (fp!=NULL) {
		printf("%s opened successfully!\n", filename);
		printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
		printf("\nSongs:\n");
		while(!feof(fp)) {
			fgets(songBuff, 132, fp);
			printf("\t%s", songBuff);
		}
	}
	else {
		printf("Memory failed to gather");
	}
	
	fclose(fp);
	return 0;
}
