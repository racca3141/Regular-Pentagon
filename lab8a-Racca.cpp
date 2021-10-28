// Emerson Racca
// 10/20/2021
// Lab 8a - Regular Pentagon

/*
Design a structure that models a regular pentagon.  A regular pentagon is a 5-sided polygon where all sides are equal in length.

1. Design:  A pentagon has the following three properties.

sideLength,
radius,
color

2. In the main, instantiate four pentagon objects. Hard code the properties. (No user interface.)

3. Build a function that takes in an Item object and prints out the properties nicely to the screen.

4. In the main, use the print function to print out the four polygons you have hard coded.
*/

#include<iostream>

using namespace std;

struct Pentagon {
	double sideLength = 1.0; // Initialized because of a warning from the compiler.
	double radius = 1.0;
	string color = "gray";
};

void printPentagonObject(Pentagon p);

int main(void) {
	const int size = 5;
	Pentagon p1, p2, p3, p4, p5;

	cout << "Regular Pentagon\n\n";

	// Hard code the properties
	p1.sideLength = 3.14; // sideLength = 2*radius*sin(180/5) if we really had to compute it.
	p1.radius = 1.59;     // radius = sideLength/(2*sin(180/5)) if given sideLength.
	p1.color = "red";

	p2.sideLength = 2.65;
	p2.radius = 3.58;
	p2.color = "orange";

	p3.sideLength = 9.79;
	p3.radius = 3.23;
	p3.color = "yellow";

	p4.sideLength = 8.46;
	p4.radius = 2.64;
	p4.color = "green";

	p5.sideLength = 3.38;
	p5.radius = 3.27;
	p5.color = "blue";

	cout << "Pentagon p1 -------\n";
	printPentagonObject(p1);

	cout << "Pentagon p2 -------\n";
	printPentagonObject(p2);

	cout << "Pentagon p3 -------\n";
	printPentagonObject(p3);

	cout << "Pentagon p4 -------\n";
	printPentagonObject(p4);

	cout << "Pentagon p5 -------\n";
	printPentagonObject(p5);

	return 0;
}

// Function that takes in an Item object
void printPentagonObject(Pentagon p) {
		cout << "Side length: " << p.sideLength << endl;
		cout << "Radius     : " << p.radius << endl;
		cout << "Color      : " << p.color << endl;
		cout << endl;
}
