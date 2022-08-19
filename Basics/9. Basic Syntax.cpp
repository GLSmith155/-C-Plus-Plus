/** Function Overloading
 * The process of creating multiple functions with the same name but
 * different signatures.
 * A function signature consists of the name and parameter list of a funciton.
 * Note that the signature doesn't include the return type. The parameters 
 * may vary by number, type, and order.
 * Not available in the C programming language.
**/

#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);

int main() {
    
    int resultNum = getResult(30, 20);
    string resultName = getResult("Larry", "Harry");
    
    cout << "resultNum is " << resultNum << endl;
    cout << "resultName is " << resultName << endl;
    
    return 0;
}

int getResult(int num1, int num2) {
    return num1 * num2;
}

string getResult(string str1, string str2) {
    return str1 + " " + str2;
}
