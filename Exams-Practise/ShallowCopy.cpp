// C++ program for the above approach
#include <iostream>
using namespace std;

// Box Class
class box {
private:
public:
	int length;
	int *breadth;
	int height;

	// Function that sets the dimensions
	void set_dimensions(int length1, int breadth1,
						int height1)
	{
		length = length1;
		*breadth = breadth1;
		height = height1;
	}

	// Function to display the dimensions
	// of the Box object
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl;
	}
};

// Driver Code
int main()
{
	// Object of class Box
	box B1, B3;

	// Set dimensions of Box B1
	B1.set_dimensions(14, 12, 16);
	// B1.show_data();

	// When copying the data of object
	// at the time of initialization
	// then copy is made through
	// COPY CONSTRUCTOR
	box B2 = B1;
	// B2.show_data();

	// When copying the data of object
	// after initialization then the
	// copy is done through DEFAULT
	// ASSIGNMENT OPERATOR
	B3 = B1;
	*(B1.breadth)=9;
	B3.show_data();     //both B1 and B2 breadth changed to 9
	B1.show_data();
	return 0;
}
//in a case when a pointer exist, compiler own copy contructor copies the address of a pointer and when 
//when we change the value of ptr in copy,its orignal copy's ptr changed
// this is the drawback of a shallow copy. and this case we need deep copy