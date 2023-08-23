#include <iostream>
using namespace std;

/**
 * Structures (also called structs) are a way to group several related variables into one place. 
 * Each variable in the structure is known as a member of the structure.
 * Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
**/

int main() {
  
    // Basic structure example used for storing groups of relevant data.
    struct {
      string brand;
      string model;
      int year;
    } car1, car2;
    // Assign values to members of the structure:
    car1.brand = "Jeep";
    car1.model = "Wrangler";
    car1.year = 2005;
    
    car2.brand = "Jaguar";
    car2.model = "XJ Sport";
    car2.year = 2002;
    // Print members of the structure:
    cout << car1.brand << "\n";
    cout << car2.brand << "\n";
    cout << endl;
    // ------------------------------------------------------------------------------------
    // Named Structures allow you to treat them as a data type. This means you can create variables
    // with this structure anywhere in the program at any time. To create a named structure, give it a 
    // name after the struct keyword.
    
    struct car {
      string brand;
      string model;
      int year;
    };
    
    car car3;
    car3.brand = "Toyota";
    car3.model = "Corolla";
    car3.year = 2020;
    
    cout << car3.brand << " " << car3.model << " " << car3.year;
}
