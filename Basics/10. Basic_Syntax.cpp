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
    // Output:       28
    //               23
    //               23
    //               21
    // -------------------------------------------------------------------------------------------------------------------
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
    // Output:    55
    //            0
    // Line 21 breakdown - &r means that r is a reference type, * referes to the type it is referencing.
    // Next the base type says that r is a reference to a pointer to an int.
    
    // -------------------------------------------------------------------------------------------------------------------
    cout << endl << "Double Checking Understanding:" << endl;
    int animalCount = 4;
    int* e = &animalCount; // Requires asterisk after int. Don't do it this way changing e doesn't change animalCount.
    int *f = &animalCount;
    cout << e << " " << f <<  " " << *f << endl; // Printing the pointers themselves only yields the memory address of animalCount.
    *f = 10;                  // Without the asterisk f and e are merely memory address types. * is what turns it into the value.
    cout << animalCount;
    /*      Output:
    Double Checking Understanding:
    0x7ffef752a354 0x7ffef752a354 4
    10
    */
    
}
