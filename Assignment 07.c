/*
Gaige Chester
CECS 130-01
Assignment 07
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee {
	char id[9];
	float salary;
};

int main() {
	int EmployeesCount = 3, i;
	struct Employee *employee;
	
	employee = (struct Employee *)malloc(9*EmployeesCount*sizeof(char)); 
		
	if (employee!=NULL) {
		printf("Memory gathered sucessfully!\n\n");
		
		for (i=0;i<3;i++) {
			printf("Employee ID: ");
			scanf("%s", &employee[i].id);
			printf("Employee Salary: ");
			scanf("%f", &employee[i].salary);
		}
		
		printf("\nRaises as follows\n");
		
		for (i=0;i<3;i++) {
			printf("\nEmployee ID: %s", employee[i].id);
			printf("\nEmployee Salary: %f", employee[i].salary*1.1);
		}
		
	}
	else {
		printf("Error occured when fetching memory");
	}
	
	printf("\n");
	free(employee);
	return 0;
}
