// Arrays - Built in Arrays

#include <iostream>

using namespace std;


int main()
{
    int someArray[10];
    
    for(int i = 0; i < 10; i++) {
        someArray[i] = i + 1;
    }
    
    for(int number : someArray) {
        cout << number << endl;
    }

    return 0;
}
// The array class.
// The Array Class is very similar to built-in arrays, 
// but is object-oriented.

#include <iostream>
#include <array>
using namespace std;

int main()
{
    // If some Ints are defined, then the undefined one's will be 0.
    array<int, 5> myIntegerArray{1}; // Output:  1,0,0,0,0
    
    for (int a : myIntegerArray) {
        cout << a << endl;
    }
    
    // Use the array class to find the size of the array:
    cout << "Size of array: " << myIntegerArray.size() << endl;


// TwiceNumber Challenge. Use the array class to create an array 
// of size 10 with only multiples of 2.
    array<int, 10> myNums;
    for (int i = 0; i < myNums.size(); i++) {
        myNums[i] = i * 2;
    }
    for (int element : myNums) {
        cout << element << endl;
    }
    return 0;
}

