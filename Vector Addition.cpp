/*
Gaige Chester
CECS 130-01
Assignment 08
*/

#include <iostream>      //IO library

using namespace std;

class vector {

	public:                   //universal access to interface
		void x_component(double x) { pos1 = x; }
		void y_component(double y) { pos2 = y; }
		void z_component(double z) { pos3 = z; }
	
	void print() const { 
		cout << "(" << pos1 << ", " << pos2 << ", " << pos3 << ")" << endl;
	}
		
	vector operator+(vector);
	vector operator-(vector);	
	
	private:                  //restricted access to implementation
	double pos1 = 0, pos2 = 0, pos3 = 0;

};

vector vector::operator+(vector x) {
	vector t;
	t.pos1 = pos1 + x.pos1;
	t.pos2 = pos2 + x.pos2;
	t.pos3 = pos3 + x.pos3;
	
	return t;
}

vector vector::operator-(vector x) {
	vector t;
	t.pos1 = pos1 - x.pos1;
	t.pos2 = pos2 - x.pos2;
	t.pos3 = pos3 - x.pos3;
	
	return t;
}


int main()
{
	vector vec1, vec2, vecSum, vecDiff, vecTest;

	vec1.x_component(9.5);
	vec1.y_component(4.2);
	vec1.z_component(6.0);
	
	vec2.x_component(10.1);
	vec2.y_component(4.3);
	vec2.z_component(1.4);
	
	vecSum = vec1 + vec2;
	vecDiff = vec1 - vec2;
	
	cout << "Vector Test = ";
	vecTest.print();
	
	cout << "Vector 1 = ";
	vec1.print();
	
	cout << "Vector 2 = ";
	vec2.print();
	
	cout << endl;
	
	cout << "Sum = ";
	vecSum.print();
	
	cout << "Difference = ";
	vecDiff.print();

}

