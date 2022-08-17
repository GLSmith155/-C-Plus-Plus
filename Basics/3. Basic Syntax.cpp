// Arrays - Built in Arrays

#include <iostream>

using namespace std;


int main()
{
    int someArray[10];
    
    for(int i = 0; i < 10; i++) {
        someArray[i] = i + 1;
    }
    
    for(int number : someArray) {
        cout << number << endl;
    }

    return 0;
}
