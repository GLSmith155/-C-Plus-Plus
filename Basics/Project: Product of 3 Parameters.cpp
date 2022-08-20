/** Project: Return the Product of 3 Parameters
 * A Function Called multiply.
 * Three Params all int.
 * Returns an integer, which is the product of 3 params.
**/

#include <iostream>
using namespace std;

int multiply(int a, int b, int c);

int main() {

    int finalProduct = multiply(2, 3, 4);
    cout << "The product of a, b, c is " << finalProduct << endl;
    
    return 0;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}
