//Pi Program

#include <stdio.h>

float test= 1;
int counter= 0;
static float result;

main () {
	int option=0;
	
	do{
		menu();
		printf("Your option is: ");
		scanf("%d", &option);
		if (option == 1) {
			pi();
		}
	}while(option!=2);
	
	system("PAUSE");
	return(0);
}

menu() {
	printf("Choose one of the following options.\n");
	printf("1) Pi\n2)Exit\n\n");
}

pi() {
	int bound;
	int i;
	
	printf("What is the nth term you wish to go to? ");
	scanf("%d", &bound);
	
	for (i=0; i < bound ;++i) {
		if (counter%2 == 0) {
			result+= (4/test);
		}
		else {
			result-= (4/test);
		}
		test+=2;
		counter+=1;
	}
	printf("\nThe result is: %.9f\n", result);
	
	system("PAUSE");
	return(0);	
}
