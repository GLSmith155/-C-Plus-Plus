/** Variable Scope and Lifetime
 * Scope: Which parts of the program is a variable accessible?
 * Lifetime: How long does a specific variable live?
 * 
 * Global variables, local variables, Static local variables.
**/

#include <iostream>
using namespace std;

// The & allows the change to be persistent throughout the app.
void someFunction(int aParam);


double myGlobalDouble = 3.14159;

int main() {

    int localToMain = 20;
    cout << "The local to main variable is " << localToMain << endl;
    cout << "global double (in main) is " << myGlobalDouble << endl;
    
    someFunction(25);
    
    return 0;
}

void someFunction(int aParam) {
    int myLocalNum = 100;
    
    cout << "My local number is " << myLocalNum << endl;
    cout << "The parameter is " << aParam << endl;
    cout << "My global double (in someFunction) is " << myGlobalDouble << endl;
}
