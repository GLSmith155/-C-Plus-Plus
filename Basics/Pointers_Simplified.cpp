#include <iostream>
using namespace std;

int main() {
  // A reference variable is a reference to an existing variable, and it's created with the & operator:
  string animal = "Elephant";
  string &animalChoice = animal;
  cout << animal << endl;
  cout << animalChoice << endl;
  animalChoice = "Zebra";
  cout << " After switching animalChoice to Zebra, animal is now " << animal << endl;
  // This is because animalChoice and animal share the same memory address despite having different
  // variable names, they are the same as far as the compiler is concerned.
  
  // & above is used to make a reference to animal's value, but it can also be used to see the memory 
  // address of an existing value.
  cout << endl << &animal << endl << endl;
  
  // Now let's create a special variable called a pointer that stores the memory address instead of value.
  string chemical = "Carbon";
  string* chemicalPtr = &chemical; // Now instead of the word carbon, you will see the mem address.
  cout << "This is chemicalPtr without the * before it: " << chemicalPtr << endl; 
  // If we didn't have the asterisk, it would say type String and memory
                               // are not compatible types.
  // What if we want to see the value of the pointer instead of the memory address? 
  // Then just add the * before it. 
  //        chemicalPtr = memoryAddress     ChemicalPtr* = valueOfMemoryAddress
  cout << "This is chemicalPtr with the * before it: " << *chemicalPtr << endl;
  // You cab also change the original value by changing the value of *chemicalPtr.
  *chemicalPtr = "Nitrogen";
  cout << " Now the value of chemical is " << chemical << endl;
}
