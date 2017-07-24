/*
Gaige Chester
Lottery Numbers
*/

#include <stdio.h>
#include <stdlib.h>


//Appears to be working with files of shorter length
//Will Calculate until it reaches at least 5 max numbers
//The only problem is the initial read that places the numbers into
//The array called numOrder

int findMax(int *, int);
int indexer;


main () {
	FILE *fp;
	char *filename = "lotteryNumbers.txt"; //Name of file
	char *filename2 = "powerNumbers.txt";
	fp = fopen(filename, "r"); //Opens file
	int i=0,length=0,j=0;
	int numOrder[70]= {0}; //Array to put all of the numbers by order
	int numOrder2[27] = {0};
	int fileNum[310]= {0};	 //Array to get all of the numbers
	int file2Num[70] = {0};
	int maxCounter=0; //This figures out how many more maxes we need
	
	if (fp!=NULL) {
		while (!feof(fp)) {
			fscanf(fp,"%d",&fileNum[i]); //Works Correctly
			length++;
			i++;
		}	
		
		for (j=0;j<length;j++) { //Works Correctly
			for(i=1;i<70;i++) { 
				if (fileNum[j]==i) { 
					numOrder[i]++;
				}
			}
		}
	findMax(numOrder, 70);
	printf("The file is %d lines long.\n", length); //Works Correctly
	printf("Normal Lottery Numbers\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\nTop occuring item(s) are:\n"); //Works Correctly
	for (i=0;i<70;i++) {
		if(numOrder[i]==numOrder[indexer]) {
			printf("\tThe number %2d occurs %2d times.\n", i, numOrder[i]);
			maxCounter++;
		}
		else if(numOrder[i]==numOrder[indexer]-1) {
			printf("\tThe number %2d occurs %2d times.\n", i, numOrder[i]);
			maxCounter++;
		}
		else if(numOrder[i]==numOrder[indexer]-3) {
			printf("\tThe number %2d occurs %2d times.\n", i, numOrder[i]);
			maxCounter++;
		}
	}
		for (i=0;i<70;i++) {
			if (numOrder[i]==numOrder[indexer]-4) {
				printf("\tThe number %2d occurs %2d times.\n", i, numOrder[i]);
				maxCounter++;
			}
		}
		printf("\nWe have %d max numbers\n", maxCounter);		
	}
	else {
		printf("Failed to open %s!", filename);
	}
	
	fclose(fp); //Closes file

	
	printf("\n\nPower Ball Number\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	fp = fopen(filename2, "r");
	maxCounter=0;
	i=0;
	j=0;
	indexer=0;
	length = 0;
	
	if (fp!=NULL) {
		while (!feof(fp)) {
			fscanf(fp,"%d",&file2Num[i]); //Works Correctly
			length++;
			i++;
		}	
		
		for (j=0;j<length;j++) { //Works Correctly
			for(i=1;i<53;i++) { 
				if (file2Num[j]==i) { 
					numOrder2[i]++;
				}
			}
		}
	findMax(numOrder2, 27);
	
	printf("Top occuring item(s) are:\n"); //Works Correctly
	for (i=0;i<27;i++) {
		if(numOrder2[i]==numOrder2[indexer]) {
			printf("\tThe number %2d occurs %2d times.\n", i, numOrder2[i]);
			maxCounter++;
		}
		else if(numOrder2[i]==numOrder2[indexer]-1) {
			printf("\tThe number %2d occurs %2d times.\n", i, numOrder2[i]);
			maxCounter++;
		}
	}
		printf("\nWe have %d max numbers\n", maxCounter);	
	}
	else {
		printf("Failed to open %s\n", filename2);
	}
	fclose(fp);
	printf("\n\n\nAll done!\n");
	system("PAUSE"); //Hesitates the console
	return 0; //Test Code
}

int findMax(int *x , int size) {	//Works Correctly
	int maxInt = x[0],i;
	
	for (i = 0; i < size; i++) {
		if ( maxInt < x[i]) {
			maxInt = x[i];
			indexer = i; //This tells what number occurred most
		}
	}
	return indexer;	
}
