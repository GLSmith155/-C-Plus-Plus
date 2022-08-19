/**   Multidimensional Arrays
 * Most common are 2D arrays. Useful in representing
 * rows and columns. First index represents the row,
 * and second index represents the column.
**/
 
#include <iostream>
using namespace std;

int main()
{
    int myNums[2][3] { //2D array that is 2 x 3.
        {1, 2, 3},
        {4, 5, 6}
    };
    
    cout << myNums[0][2] << endl;
    
    // Changing the value of a particular entry.
    myNums[1][0] = 14;
    cout << myNums[1][0] << endl;
    
    // Printing out a 2D array.
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << myNums[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
