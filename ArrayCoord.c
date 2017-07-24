//Test

#include <stdio.h>
#include <stdlib.h>

main() {
	int i=0,j=0;
	int iArray[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

	printf("\n"); //Pretty Printing

	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
			printf("iArray[%d][%d] is: %d\n", i,j,iArray[i][j]);
		}
	}
	
	printf("\n\nAdjusted results as follows\n\n");
	
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++){
			if (i*j==0) {
				iArray[i][j] = 0;
			}
			else {
				iArray[i][j] = i*j;
			}
			printf("iArray[%d][%d] is : %d\n", i,j,iArray[i][j]);
		}
	}
	
	System("PAUSE");
	return 0;
}
