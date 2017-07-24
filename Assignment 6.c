/*
Gaige Chester
CECS 130-01
Assignment 6 Challenge 1
*/

#include <stdio.h>
#include <string.h>

main () {
	int i=0, x=0;
	char *sentence;
	sentence = "The results were dismal - really dismal. The fees charged were astronomical fees";
		
	char results[] = "Results";
	char fee[] = "fees";
	char dismal[] = "dismal";
	
  	int iArray[3]= {0};
  	
  	char *resultsString;
  	char *feeString;
  	char *dismalString;
  	
  	resultsString= strstr(sentence, results);
  	feeString = strstr(sentence, fee);
  	dismalString = strstr(sentence, dismal);
  	
  	for (i=0; i<80; i++) {
  		if (resultsString!=NULL) {
  			resultsString = strstr(resultsString+7, results);
  			iArray[0]++;
		  }
	  }
	for (i=0;i<80;i++) {
		if (feeString!=NULL) {
			feeString = strstr(feeString+4, fee);
			iArray[1]++;
		}
	}
	for (i=0;i<80;i++) {
		if (dismalString!=NULL) {
			dismalString = strstr(dismalString+6, dismal);
			iArray[2]++;
		}
	}
	  
	printf("%d Results\n", iArray[0]);
	printf("%d fees\n", iArray[1]);
  	printf("%d dismal\n\n", iArray[2]);
  	
  	system("PAUSE");
	return 0;
}
