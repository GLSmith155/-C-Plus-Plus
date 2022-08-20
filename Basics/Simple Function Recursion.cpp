/** Recursion
 * When a function calls itself, this is called recursion.
 * Recursion requires each of the following:
 *   1. At least one base case (no recursion in this case.)
 *   2. At least one recursive case (this is where recursion occurs.)
**/

#include <iostream>
using namespace std;

void countDownFrom(int num);
int sumValues(int num);

int main() {

    int totalSum = sumValues(2);
    cout << "The total sum of values is " << totalSum << endl;
    
    countDownFrom(3);
    
    return 0;
}

void countDownFrom(int num) {
    if (num >= 0) {
        cout << num << endl;
        countDownFrom(num - 1);
    }
}

int sumValues(int num) {
    if (num >= 1) {
        return num + sumValues(num - 1);
    }
    return num;
}
