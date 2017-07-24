/*
Gaige Chester
CECS 130-01
Assignment 08
*/

#include <iostream>      //IO library
#include <cmath>		// Sqrt/power library

using namespace std;

class vector {

	public:                   //universal access to interface
	void x_component(double x) { pos1 = x; }
	void y_component(double y) { pos2 = y; }
	void z_component(double z) { pos3 = z; }
	
	void print() const
		{ cout << "(" << pos1 << ", "
		<< pos2 << ", " << pos3 << ")" << endl; }
		
	vector operator+(vector);
	double length();
	bool operator==(vector x);	
	
	public:
	double pos1, pos2, pos3;

};

double vector::length() {
	vector t;
	t.pos1 = pos1;
	t.pos2 = pos2;
	t.pos3 = pos3;
	double len;
	len = sqrt(pow(t.pos1, 2)+pow(t.pos2,2)+pow(t.pos3,2));
	
	return len;
}

vector vector::operator+(vector x) {
	vector t;
	t.pos1 = pos1 + x.pos1;
	t.pos2 = pos2 + x.pos2;
	t.pos3 = pos3 + x.pos3;
	
	return t;
}


bool vector::operator==(vector x) {
	vector t;
	t.pos1 = pos1;
	t.pos2 = pos2;
	t.pos3 = pos3;
	
	double len1, len2;
	
	len1 = x.length();
	len2 = t.length();
	
	if (len1==len2) {
		return true;
	}
	else {
		return false;
	}
}


int main()
{
	vector vec1, vec2, vecSum;
	double vec1L, vec2L, vec3L;

	vec1.x_component(4);
	vec1.y_component(5);
	vec1.z_component(6);
	
	vec2.x_component(4);
	vec2.y_component(6);
	vec2.z_component(6);

	vecSum = vec1 + vec2;
	
	cout << "Vector 1 = ";
	vec1.print();
	
	cout << "Vector 2 = ";
	vec2.print();
	
	cout << endl;
	
	cout << "Vector 1 + Vector 2 = ";
	vecSum.print();
	
	cout << endl;
	
	vec1L = vec1.length();
	vec2L = vec2.length();
	vec3L = vecSum.length();
	cout << "The length of Vector 1 is: " << vec1L << endl;
	cout << "The length of Vector 2 is: " << vec2L << endl;
	cout << "The length of Vector Sum is: " << vec3L << endl;
	
	cout << endl;
	
	if (vec1==vec2) {
		cout << "Equal length" << endl;
	}
	else {
		cout << "Unequal length" << endl;
	}
	
	system("PAUSE");
}

