/*
Gaige Chester
CECS 130-01
Lab 05
*/

#include <stdio.h>

void adder(void);
void subtracter(void);
static int sum;

int main() {
	int i;
	
	printf("The program will ask you for a series of numbers to add\n");
	printf("and subtract while keeping a running total for you for 5 total loops.\n\n");
	system("PAUSE");
	
	
	for (i==0; i<4; i++) {
		adder();
		subtracter();
		if (i+1==1) {
			printf("This was the end of the %dst loop.\n\n", i+1);
		}
		else if (i+1==2) {
			printf("This was the end of the %dnd loop.\n\n", i+1);
		}
		else if (i+1==3) {
			printf("This was the end of the %drd loop.\n\n", i+1);
		}
		else {
			printf("This was the end of the %dth loop.\n\n", i+1);
		}
	}
	printf("The total is %d\n\n", sum);
	
	return(0);
	system("PAUSE");
}

void adder() {
	int x;
	
	printf("Enter a number to add: ");
	scanf("%d",&x);
	sum += x;

}

void subtracter() {
	int y;
	
	printf("Enter a number to subtract: ");
	scanf("%d", &y);
	sum -= y;
}



