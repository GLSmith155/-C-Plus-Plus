/*  Exceptions and the Exception Hierarchy in C++
* Exception objects are created from classes, just like any objects are.
* The top of the hierarchy is a class named exception. Other classes are
* derived from the exception class via inheritance.
* Inheritance establishes an "is a " relationship. Like saying Dog, Cat, Bird belong
* to the base class Animal. Parent/Child and class/Subclass are common terms.
*                           Exception
*    Logic_error______    runtime_error   bad_optional_access   bad_typeid    . . .
*     |              |  
* Invalid_argument  out_of_range
*/ 
// The below try catches prevent the program from crashing by just cout a msg instead.
// cerr is often used instead of cout for exception handling.
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
	// Logic_error: length_error example -
	vector<int> myNums;

	try 
	{
		myNums.resize(myNums.max_size() + 1); // Creates a length error
	}
	catch (const length_error & err) 
	{
		cerr << err.what() << endl;
	}
	

	// Logic_error: out_of_range example -
	vector<string> names(5);

	names.at(0) = "Bib";
	names.at(1) = "John";
	names.at(2) = "Sol";
	names.at(3) = "Hoy";
	names.at(4) = "Rent";

	for (string name : names) {
		cout << name << endl;
	}
	try {
		names.at(5) = "Pol"; // Creates an out_of_range error, which is a logic_error.
	}
	// Passing this error in by reference with const.
	catch(const out_of_range & err) {
		// The what method print out Invalid Vector Subscript.
		// The Catch header contains the method you catch sort of like how a 
		// function has parameters.
		cerr << err.what() << endl;
	}
	return 0;
}

/* More about logic errors:
* In general, a logic error results from a fault in logic in our code.
* E.g. out of range error above. Another logic error is the length_error,
* which occurs in situations involving invalid lengths.
*/
