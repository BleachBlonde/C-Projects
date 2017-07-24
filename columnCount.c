//Array Column Sort

#include <stdio.h>
#include <stdlib.h>

main() {
	int i,j,a,b,c,d,e;
	int temp,temp2,temp3;
	int iArray[3][5] = {{6,7,9,4,8},{3,2,7,4,1},{9,4,5,8,3}};
	int fArray[5];
	
	printf("Non-Adjusted Block\n\n");
	
	for (i=0;i<3;i++) {
		for (j=0;j<5;j++) {
			printf("%d ",iArray[i][j]);	
		}
		printf("\n");
	}
	
	printf("\nAdjusted Block\n\n");
	
	a = iArray[0][0]+iArray[1][0]+iArray[2][0];
	b = iArray[0][1]+iArray[1][1]+iArray[2][1];
	c = iArray[0][2]+iArray[1][2]+iArray[2][2];
	d = iArray[0][3]+iArray[1][3]+iArray[2][3];
	e = iArray[0][4]+iArray[1][4]+iArray[2][4];
	
	fArray[0] = a;
	fArray[1] = b;
	fArray[2] = c;
	fArray[3] = d;
	fArray[4] = e;

	int max = fArray[0];
	
	for (i = 0; i < 5; ++i) {
		if ( max < fArray[i]) {
			max = fArray[i];
		}
	}
	
	if (max == a) {
		printf("Congrats it's already moved.");
	}
	else if (max == b) {
		temp = iArray[0][0];
		iArray[0][0] = iArray[0][1];
		iArray[0][1] = temp;
		temp2 = iArray[1][0];
		iArray[1][0] = iArray[1][1];
		iArray[1][1] = temp2;
		temp3 = iArray[2][0];
		iArray[2][0] = iArray[2][1];
		iArray[2][2] = temp3;
	}
	else if (max == c) {
		temp = iArray[0][0];
		iArray[0][0] = iArray[0][2];
		iArray[0][2] = temp;
		temp2 = iArray[1][0];
		iArray[1][0] = iArray[1][2];
		iArray[1][2] = temp2;
		temp3 = iArray[2][0];
		iArray[2][0] = iArray[2][2];
		iArray[2][2] = temp3;
	}
	else if (max == d) {
		temp = iArray[0][0];
		iArray[0][0] = iArray[0][3];
		iArray[0][3] = temp;
		temp2 = iArray[1][0];
		iArray[1][0] = iArray[1][3];
		iArray[1][3] = temp2;
		temp3 = iArray[2][0];
		iArray[2][0] = iArray[2][3];
		iArray[2][3] = temp3;
	}
	else {
		temp = iArray[0][0];
		iArray[0][0] = iArray[0][4];
		iArray[0][4] = temp;
		temp2 = iArray[1][0];
		iArray[1][0] = iArray[1][4];
		iArray[1][4] = temp2;
		temp3 = iArray[2][0];
		iArray[2][0] = iArray[2][4];
		iArray[2][4] = temp3;
	}

	for (i=0;i<3;i++) {
		for (j=0;j<5;j++) {
			printf("%d ",iArray[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
