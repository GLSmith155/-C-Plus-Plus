/** Parameter Passing Schemes
 * 
 *  Pass-by-value (What we've used so far.)
 *  A copy of whatever argument we use is stored in the Parameter
 *  to be used in the function body/definition.
 * 
 *  Pass-by-reference
 *  Allows us to give more control to the function.
 *  Values of parameteres passed by reference that are changed
 *  reflect the change in the argument that was passed to them.
**/

#include <iostream>
using namespace std;

// The & allows the change to be persistent throughout the app.
void valueChanged(int& someNum);

int main() {
    int myNum = 20;
    
    cout << "myNum is currently: " << myNum << endl;
    valueChanged(myNum);
    cout << "After valueChange(), myNum is " << myNum << endl;
/** Without & the second cout line would still be 20.
*  This is because without & we are doing a pass-by-value where
* someNum is given the value 20 from myNum, and then the func.
* changes someNum to 100. These two variables are in two different
* memory locations. When & is used, myNum and someNum are in the 
* same place in memory, and when are function changes parameter
* someNum, then myNum is changed as well. "Pass-by-reference"
**/
    return 0;
}

void valueChanged(int& someNum) {
    someNum = 100;
}
