/*
Gaige Chester
CECS 130-01
Lab 07
*/

#include <stdio.h>
#include <string.h>

typedef struct cities {
	char cityName[20];
	int pop;
	double size;	
	} city;

void density(city *);
	
int main (void) {
	int i;
	city cities[3];
	
	strcpy(cities[0].cityName, "Paradise");
	cities[0].pop = 200000;
	cities[0].size = 75000.00;
	
	strcpy(cities[1].cityName, "Springfield");
	cities[1].pop = 230000;
	cities[1].size = 82000.00;
	
	strcpy(cities[2].cityName, "Main");
	cities[2].pop = 134000;
	cities[2].size = 42000.00;	
	
	for (i=0;i<3;i++) {
		printf("%-20s\t\t%.2d\t\t%.2f\n", cities[i].cityName,cities[i].pop, cities[i].size);
	}
	s
	density(cities);
}	
	

void density(city *c) {
	int i;
	for (i=0;i<3;i++) {
		printf("%-20s\t\t%.2f\tpersons per mile\n", c[i].cityName, c[i].pop/c[i].size);
	}
}
