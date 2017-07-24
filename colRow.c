//Column / Row Swap

#include <stdio.h>
#include <Stdlib.h>

main() {
	int iArray[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j;
	int temp,temp2,temp3,temp4;
	
	printf("Non-Adjusted Block\n\n");
	
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
			printf("%d ",iArray[i][j]);	
		}
		printf("\n");
	}
	
	//Row & Column 1
	temp = iArray[0][1];
	iArray[0][1] = iArray[1][0];
	iArray[1][0] = temp;
	temp2 = iArray[0][2];
	iArray[0][2] = iArray[2][0];
	iArray[2][0] = temp2;
	temp3 = iArray[0][3];
	iArray[0][3] = iArray[3][0];
	iArray[3][0] = temp3;
	
	//Clearing Variables
	temp = 0;
	
	//Row & Column 2
	printf("\nAdjusted Block\n\n");
	for (i=0;i<4;i++) {
	for (j=0;j<4;j++) {
		printf("%d ",iArray[i][j]);	
	}
	printf("\n");
	}
	return 0;
}
