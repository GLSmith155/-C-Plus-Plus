/******************************************************************************
Object Oriented Programming
3 primary principles: Encapsulation, Inheritance, Polymorphism

Encapsulation unites behaviors and data into an object.
Encapsulation provides security via information hiding and protecting data from -
              the outside world.
              Provides portability as we can move an object around.
              A Class acts as a blueprint for an object.
*******************************************************************************/

#include <iostream>
#include <string>
#include "House.h"

using namespace std;


// Function prototypes
void printHouseData(const House& house);


int main()
{
    House myHouse;
    House newHouse(57, 32, "orange");


    myHouse.print();

    myHouse.setColor("blue");
    myHouse.setNumStories(2);
    myHouse.setNumWindows(5);

    // printHouseData(myHouse);
    //printHouseData(yourHouse);

    myHouse.print();
    newHouse.print();

    return 0;
}

/* Anytime you want both the efficiency of Pass by Reference, but the security of a function not
* being able to change the original object through its setters, or other non-const member functions,
* we can make it a const reference. Add const in front of the data type.
* Now House is being treated like a constant, and it can't change it.
* Using "set" inside printHouseData for House will no longer work.
*/
void printHouseData(const House& house) {
    cout << "The house is " << house.getNumStories() << " stories," << endl;
    cout << "the color " << house.getColor() << "," << endl;
    cout << "and it has " << house.getNumWindows() << " windows." << endl;
}

/* Seperate Compilation
* Specification file (.h)
* Implementation file (.cpp)
*/
