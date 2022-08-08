/*
Control Flow Basics.
Control Statements have 3 main cateogires
1. Sequential Statements (Sequence Statements) - Statements executed in sequence one after another.
2. Selection Statements (Decision Statements)
3. Repetition Statements (Loops)
*/
#include <iostream>

using namespace std;

int main()
{
    // Sequential Statements
    int age = 15;
    cout << age << endl;

    // Selection Statements
    if (age > 15) {
        cout << "The age is greater than 15.";
    }
    else {
        cout << "The age is 15 or less.";
    }
    
    // Repetition Statements
    for(int i = 0; i <= age; i++) {
        cout << "The age is " << i << endl;
    }
    return 0;
}
