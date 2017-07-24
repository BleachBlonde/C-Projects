/*
Gaige Chester
*/

#include <stdio.h>

main() {
	int option, num1, num2;
	
	do {
		printf("1)Addition\n2)Subtract\n3)Multiply\n4)Divide\n5)Modulus\n6)Exit");
		printf("\nChoose an option: ");
		scanf("%d", &option);
		
		switch(option){
			case 1:
				printf("Choose two numbers separated by a comma: ");
				scanf("%d,%d", &num1, &num2);
				printf("The answer is %d\n\n", num1+num2);
				break;
			case 2:
				printf("Choose two numbers separated by a comma: ");
				scanf("%d,%d", &num1, &num2);
				printf("The answer is %d\n\n", num1-num2);
				break;
			case 3:
				printf("Choose two numbers separated by a comma: ");
				scanf("%d,%d", &num1, &num2);
				printf("The answer is %d\n\n", num1*num2);
				break;
			case 4:
				printf("Choose two numbers separated by a comma: ");
				scanf("%d,%d", &num1, &num2);
				printf("The answer is %d\n\n", num1/num2);
				break;
			case 5:
				printf("Choose two numbers separated by a comma: ");
				scanf("%d,%d", &num1, &num2);
				printf("The answer is %d\n\n", num1%num2);
				break;
			case 6:
				printf("Goodbye!");
				break;
			default:
				printf("Sorry that isn't an option\n\n");
				break;
			
		}
			
	}while(option!=6);
}


	
