
/* 
Multi-line C++ comment.
*/
#include <iostream> // boolalpha included in ios. If called makes boolean print true or false rather than 1 or 0 until noboolalpha is called.
#include <string> // "Now we can use our strings as a data type" Really not sure why we include this.
                 
using namespace std;
// string insertion symbol "<<" data flows from right to left in direction of pointing.
//  == equal-to operator              = assignment operator              != not-equals-to operator
//     && - and      || - or     !variable  - not 
int main()
{
    const double MY_PI = 3.14159;    // Constants are typically in "capitalize underscore capitalize" case.
    char singleChar = 'a';  
    int myInt;  // Cannot accomodate decimal numbers.
    myInt = 15; // const makes the variable (the l variable) unchangable
    string myName = "log";    // endl creates new line.
    double myDouble = 3.1419;
    cout << "hello" << endl << myDouble << endl << myInt << endl << myName << endl;
    
    cout << boolalpha;
    int a = 15;
    int b = 20;
    bool areEqual = a == b;
    cout << (a < b) << endl;
    
    cout << (a < b) << endl;
    cout << areEqual << endl;
    
    // User input.
    int age;
    string fullName;
    
    cout << "Please enter your name" << endl;
    getline(cin, fullName);
    cout << "Please enter your age!" << endl;
    cin >> age;
    
    cout << "Your age is " << age << endl;
    cout << "And your name is " << fullName << "." << endl;
    return 0;
}
