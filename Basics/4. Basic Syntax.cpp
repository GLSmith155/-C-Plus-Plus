/** The Vector Class:
* A Sequential Container just like the Array Class.
* Consists of Contiguous memory just like arrays.
* Not limited to fixed sizes, and can be dynamically resized.
* You do not need to specify an initial capacity.
**/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> someVec;
    vector <string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);
    return 0;
}
