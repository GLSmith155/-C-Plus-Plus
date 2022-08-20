/** Project: Tic-Tac-Toe
 * 
**/

/** I'll make a 3x3 2d array and represent these visually with
 * X's and O's. After every move, the board will print, and
 * upon getting 3 in a row "victory" will be printed. 
 * Ideally I will make a function that allows for a user to 
 * play against the computer.
**/

#include <iostream>
using namespace std;

/** Draft Functions:
 * void boardVisual(2d array): When called prints the board.
 * int boardArray(array, array)
**/
//int multiply(int a, int b, int c);
void boardVisual(string a, string b, string c);
void boardVisual2();
int main() {
    string temp;
    // Not 100% sure how to implement as a function. Will do in main first, then try in fun.
    string boardArray[3][3] {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"}
    };
    
    cout << "------------------------------------------" << endl;
    cout << "You're X's! Pick a square to place your X!" << endl;
    
    // Print Out boardArray.
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << boardArray[row][col] << " ";
        }
        cout << endl;
    }
    
    // cin a-i. Find letter in 2d array, change it to X.
    cin >> temp;
    std::find
    boardArray[temp] = X;
    
    boardVisual2();
    
    return 0;
}

void boardVisual(string a, string b, string c, string d, string e, string f, string g, string h, string i) {
    cout << "------------------------------------------" << endl;
    cout << "You're X's! Pick a square to place your X!" << endl;
    cout << a + " | " + b + " | " + c << endl;
    cout << " -  -  - " << endl;
    cout << d + " | " + e + " | " + f << endl;
    cout << " -  -  -" << endl;
    cout << g + " | " + h + " | " + i << endl;
}

void boardVisual2() {
        for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << boardArray[row][col] << " ";
        }
        cout << endl;
    }
}
