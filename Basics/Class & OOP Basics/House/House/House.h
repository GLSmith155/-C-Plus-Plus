/* Header/Specification file usually has the same name as the class.
* Contains essentiauly just the data members and the prototypes for the 
* member functions AKA methods. We include string librarysince when of our 
* data members is a string.
*/

#ifndef HOUSE_H  // Stands for "if not defined" The name can be anything but HOUSE_H is best.
                 // HOUSE_H is not defined.
#define HOUSE_H  // HOUSE_H is now defined.
/* The point of ifndef and define is that if we had a bunch of classes we insure that this
* header file is only included once. The include guards make sure it is only used once.
* #PragmaOnce does the same thing, but Pragma is not standard and will not always work. 
*/

#include <string>
using namespace std;

// Just like in Java, "Public" and "Private" are Access Modifiers (or Access Specifiers.)
class House {


// Member/Member funtions: (Same thing as a Java methods.)
// They can be defined as a behavior that belongs to a class.

// Setters can also be called "mutators." Getters can also be called "accessors."
    public:

        // Adding custom no arg constructor to class House.
        House();

        // An overload constructor of House with parameters.
        // Destructor cannot have overload.
        House(int numStories, int numWindows, string color);

        // Adding destructor below House constructor.
        ~House();

        void setNumStories(int numStories);

        void setNumWindows(int numWindows);

        void setColor(string color);

/* We don't have to write const after the getter methods, but it is considered good
* software engineering to only give a method as much access as it needs and no more.
* In the context of writing const after a member function header like below, we make it
* so the method has access to the data members, but cannot change them. Since getters only
* return and display the value this is perfect.
* If a setter had const after it, we would get a compile time error due to not being able
* to change the private data. Methods act like gate keepers of the data.
*/
        int getNumStories() const;
 
        int getNumWindows() const;

        string getColor() const;

        void print() const;

// Can be called Data Members OR Fields. They are initially only accessible in the class itself.
// To use Private Data Members outside of the class, write a setter and getter method like above.
    private:
        int numStories;
        int numWindows;
        string color;

    }; //end of the class House

#endif