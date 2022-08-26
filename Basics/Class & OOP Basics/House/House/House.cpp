/* Implementation File.
* #Include the specification file so that this imlpementation file knows about the
* specification and data that lives in the House class. .cpp by default doesn't know that these
* member functions are in a class and assumes they are a global function until "House::" 
* is added between the return type and the member function identifier.
*/

// To create an object from any class, there must be a constructor.
// The  compiler so far has used a default constructor.

/* Constructors and Destructors
* 
* Constructors:
* Must have the same name as the class itself.
* Are functions.
* Can be overloaded.
* Have no return type - not even void.
* Are called when an object is created.
* 
* Destructors:
* There can only be one.
* Does cleanup when the obkect is remobed from memory.
* In other words, they're called when the object is destroyed.
*/
#include "House.h"
#include <iostream>

// Adding custom constructor. Some would say that "we've added our own DEFAULT constructor
// simple because this custom constructor below takes no unique parameters.
// But technically, this is a "no arg constructor."
House::House() {
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "white";
}

House::House(int numStories, int numWindows, string color) {
    this->numStories = numStories; //The second being the parameter.
    this->numWindows = numWindows;
    this->color = color;
}

House::~House() {
    cout << "The " << color << " house with " << numStories << " stories "
        << " and " << numWindows << " windows is being destroyed!" << endl;
}


void House::setNumStories(int numStories)
{
/* The "this" keyword:
* If you want to refer to data members from inside one of the classes methods, you can
* use the this keyword. Since the parameter name is the same as the data member, we have
* to use the "this" keyword. Doing this allows the parameter to eclipse or overshadow
* the data member of the same name, AKA "name shadowing." You could just name them
* different things, and now you don't have to use "this" but name shadowing is the
* preferred way. (Reusing the data member's name as the parameter name is cleaner)
*/
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}

/* We don't have to write const after the getter methods, but it is considered good
* software engineering to only give a method as much access as it needs and no more.
* In the context of writing const after a member function header like below, we make it
* so the method has access to the data members, but cannot change them. Since getters only
* return and display the value this is perfect.
* If a setter had const after it, we would get a compile time error due to not being able
* to change the private data. Methods act like gate keepers of the data.
*/
int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}

void House::print() const
{
    cout << "The house is " << numStories << " stories," << endl;
    cout << "the color " << color << "," << endl;
    cout << "and it has " << numWindows << " windows." << endl;
}