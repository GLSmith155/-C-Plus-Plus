/** Recursion
 * When a function calls itself, this is called recursion.
 * Recursion requires each of the following:
 *   1. At least one base case (no recursion in this case.)
 *   2. At least one recursive case (this is where recursion occurs.)
**/
#include <iostream>
#include <cmath>
using namespace std;

void countDownFrom(int num);

int main() {

    countDownFrom(3);
    
    return 0;
}

void countDownFrom(int num) {
    if (num >= 0) {
        cout << num << endl;
        countDownFrom(num - 1);
    }
}
