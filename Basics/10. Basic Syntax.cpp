/** The <cmath> Library
 * 
 * The library contains many different functions for C++ developers.
 * A few being: pow - finding a base taken to a power
 * sqrt - for finding the square root.
 * ceil - for rounding a value up to the nearest integer.
 * floor - for rounding a value down to the nearest integer.
 *  cplusplus.com a good resource for other cmath functions.
**/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int powResult = pow(2, 3);
    int sqrtResult = sqrt(25);
    int ceilResult = ceil(4.2);
    int floorResult = floor(4.2);
    cout << powResult << endl; // 8
    cout << sqrtResult << endl; // 5
    cout << ceilResult << endl; // 5
    cout << floorResult << endl; // 4
    
    return 0;
}
