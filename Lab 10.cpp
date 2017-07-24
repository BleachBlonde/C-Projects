/*
Gaige Chester
CECS 130-01
Lab 10
*/

#include <iostream>

using namespace std;

// Class Used to represent a room, its attributes, and methods
class Playroom
{
	// Private Variables for Length, Width, Height
private:
	double length; 
	double width;
	double height;
public:
	//Constructor with 3 distinct parameters
	Playroom( double myLength, double myWidth, double myHeight) 
	{
		length = myLength;
		width = myWidth;
		height = myHeight;
		cout << "New Room Created" << endl;
	} 
	//Set the Length, Width, Height
	void setLength( double);
	void setWidth( double );
	void setHeight( double ); 
	
	//Get the Length, Width, Height
	double getLength();
	double getWidth();
	double getHeight(); 
	       
	//Show all 3 dimensions for a room
	void printRoomDim();  
	
	//Set all 3 dimensions for a room
	void setRoomDim( double, double, double);  
	
	//Calculate Area, Surface Area, Volume
	double floorArea();
	double surfaceArea();
	double volume();
             
};      

//Set the Length
void Playroom::setLength( double myLength)
{
	length = myLength;
}

//Set the Width
void Playroom::setWidth( double myWidth)
{
	width = myWidth;
}

//Set the Height
void Playroom::setHeight( double myHeight)
{
	height = myHeight;
}
     
//Get the Length
double Playroom::getLength()
{
	return length;
}

//Get the Width
double Playroom::getWidth()
{
	return width;
}

//Get the Height
double Playroom::getHeight()
{
	return height;
}

//Calculate the floorArea
double Playroom::floorArea()
{
	return length*width;
}


//Calculate the Surface Area
double Playroom::surfaceArea()
{
	return 2*floorArea()+ 2*height*width+ 2*height*length;
}
//Volume
double Playroom::volume()
{
	return length*width*height;
}

//Show all three room dimensions
void Playroom::printRoomDim()
{
	cout << "The room dimensions are: " << endl;
	cout << "Length = "<< getLength() << endl;
	cout << "Width  = " << getWidth() << endl;
	cout << "Height = " << getHeight() << endl;
}

//Set all three room dimensions
void Playroom::setRoomDim( double len, double wid, double hght)
{
	setLength( len);
	setWidth(wid);
	setHeight(hght);
}

//Main 
int main()
{
	//Create a living room
	cout << "Making a Playroom" << endl;
	Playroom playRoom = Playroom(10,5,8);
	//Show dimensions
	playRoom.printRoomDim();
	
	cout << "My room changes dimesions" << endl;
	//Individually change the dimensions
	playRoom.setLength(20);
	playRoom.setWidth(10);
	playRoom.setHeight(12);
	//Individually print the values
	cout << "Checking the changes" << endl;
	cout << "Length = " << playRoom.getLength() << endl;
	cout << "Width  = " << playRoom.getWidth() << endl;
	cout << "Height = " << playRoom.getHeight() << endl;
	
	cout << "Checking the dimensions again" << endl;
	//Print the values all at once
	playRoom.printRoomDim();
    
    
	//Print the area
	cout << "Floor Area " << endl;
	cout << "Floor Area of Playroom = " <<playRoom.floorArea() << endl;
    
    
	//Print the surface area
	cout << "Surface Area " << endl;
	cout << "Surface area of Playroom = "<< playRoom.surfaceArea() << endl;
    //Print the Volume
    cout << "Volume " <<endl;
    cout << "Volume of Playroom = "<< playRoom.volume() << endl;
    
	return 0;
}
