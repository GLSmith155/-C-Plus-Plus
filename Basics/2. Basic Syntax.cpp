/*
Control Flow Basics.
Control Statements have 3 main categories.
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
// More work in Selection Control Statements
// Selection Control Statements
#include <iostream>

using namespace std;

int main()
{
    
    int age;
    
    cout<<"Welcome to the whatever." << endl;
    cout << "Please enter your age" << endl;
    cin >> age;
    
    if (age >=21) {
        cout << "Here have some candy" << endl;
    }
    
    else if (age >= 16) {
        cout << "At least you can drive" << endl;
    }
    else {
        cout << "Please have a coke" << endl;
    }
 
 char grade;
 
 cout << "Please enter a letter grade" << endl;
 cin >> grade;
 
 switch (grade) {
    case 'A':
        cout << "Great Job!" << endl;
        break;
    case 'B':
        cout << "That's okay." << endl;
        break;
    case 'C':
        cout << "Wow that stinks." << endl;
        break;
    default:
        cout << "You have entered an invalid grade. Try again."<< endl;
 }
    return 0;
}
// *******************************************************************

// Repitition Control Statements

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    
    while (count < 10) {
        if (count == 5) {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
    }
    return 0;
}

