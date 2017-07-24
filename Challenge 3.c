/*
Gaige Chester
CECS 130-01
Challenge 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main() {
	int dice1, dice2, sum;
	char play;
	
	
	srand(time(0));
	dice1= rand()%(6)+1;
	dice2= rand()%(6)+1;
	sum= dice1+dice2;
	
	printf("Would you like to play a game (yes or no)? ");
	scanf("%c", &play);
	
	if (play=='y') {
		printf("If the sum equal 7 or 11 you win\n");
		printf("Are you ready?\n");
		system("PAUSE");
		
		printf("Your first dice is: %d\n", dice1);
		printf("Your second is: %d\n", dice2);
		printf("Your sum is: %d\n\n", sum);
		
		if (sum==7) {
			printf("\nCongratulations, you won!\n\n");
		}
		else if (sum ==11) {
			printf("\nCongratulations, you won!\n\n");
		}
		
		else {
			printf("\nSorry you lost\n\n");
		}
		
	}
	
	printf("Thanks for playing!!\n");
	system("PAUSE");
	return(0);
	
}
