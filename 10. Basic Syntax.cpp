#include <iostream>
using namespace std;

int main() 
{
    int landon, *age; 
    landon = 28;
    int *a = &landon; // &landon is the address. a is pointing to that address. 
    cout << landon << endl;
    *a = 23;
    cout << landon << endl;
    int **aa = &a;  // Is now a pointer to a pointer.
    cout << **aa << endl;
    **aa = 21;
    cout << landon << endl << endl;   // So changing the pointer of a pointer of an Int changes the original Int.
    // When you assign a variable, it is a reference to an object not the object itself.
    // Therefore, we cannot have a pointer simply to a reference. *i = a for example.
    // But, we can define a reference to a pointer.
    int i = 55;
    int *p;      // p is a pointer to int.
    int *&r = p; // r is now a reference to the pointer p.
    cout << i << endl;
    r = &i;      // r refers to a pointer; assigning &i to r makes p point to i.
    *r = 0;      // dereferencing r yields i, the object to which p points; changes i to 0.
    cout << i << endl;
    // Line 21 breakdown - &r means that r is a reference type, * referes to the type it is referencing.
    // Next the base type says that r is a reference to a pointer to an int.
    
}
