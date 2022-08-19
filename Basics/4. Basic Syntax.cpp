/** The Vector Class:
* A Sequential Container just like the Array Class.
* Consists of Contiguous memory just like arrays.
* Not limited to fixed sizes, and can be dynamically resized.
* You do not need to specify an initial capacity.
**/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/** Vector Methods / Member functions:
 * push_back - Used to extend vector with a new element at end.
 * pop_back - Used to remove element at end of vector.
 * front - Returns front element.   back - returns last element.
 * instert - Can insert an element anywhere in vector.
 * begin - Returns the beginning of the vector. Used to insert.
**/
int main()
{
// someVec is an example of a vector created without 1st specifying
// size. anotherVec is a vector example with a specific size.
    vector<int> someVec;
    vector <string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    anotherVec[0] = "Keith";
    anotherVec[1] = "Jeremy";
    anotherVec[2] = "Shirt";
    // Below we add Salsa to anotherVec using push_back.
    anotherVec.push_back("Salsa");
    
    cout << "The size of someVec is: " << someVec.size() << endl;
    
    for (int val : someVec) {
        cout << val << endl;
    }
    
    cout << endl;
    
    for (string name : anotherVec) {
        cout << name << endl;
    }
    cout << "The size of anotherVec is: " << anotherVec.size() << endl;
    
    cout << "Front and back: " << endl;
    cout << "front: " << anotherVec.front() << endl;
    cout << "back: " << anotherVec.back() << endl;
    
    anotherVec.pop_back();
// Where to begin insertion is first, followed by what we insert.
    anotherVec.insert(anotherVec.begin(), "Don");

    cout << "now, front is " << anotherVec.front() << endl;
    cout << "now, back is " << anotherVec.back() << endl;
    return 0;
}
