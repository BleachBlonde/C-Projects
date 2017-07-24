/*
Gaige Chester
CECS 130-01
Lab 08
*/

#include <stdio.h>
#include <stdlib.h>

struct Test {
	
	int testNum;
	float testScore;
	
};

int main() {
	int i, count;
	struct Test *tests;
	
	printf("How many Tests do you have? ");
	scanf("%d", &count);
	
	tests = (struct Test *) malloc(count*sizeof(int));

	if (tests!=NULL) {
		for (i=0;i<count;i++) {
			printf("Enter Test Number: ");
			scanf("%d", &tests[i].testNum);
			
			printf("Enter your score: ");
			scanf("%f", &tests[i].testScore);
		}
		for (i=0;i<count;i++) {
			printf("Score for Test %d: %f\n", tests[i].testNum, tests[i].testScore);
		}
	}
	else {
		printf("Failed to allocate memory!");
	}
	
	
	free(tests);
	return 0;
}
