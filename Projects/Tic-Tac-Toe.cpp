/** Project: 
 * Tic-Tac-Toe
**/

/** I'll make a 3x3 2d array and represent these visually with
 * X's and O's. After every move, the board will print, and
 * upon getting 3 in a row "victory" will be printed. 
 * Ideally I will make a function that allows for a user to 
 * play against the computer.
**/

#include <iostream>
using namespace std;


void chooseLetter();

int main() {
    
    // Not 100% sure how to implement as a function. Will do in main first, then try in fun.

    

/**    
    // Print Out boardArray.
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << boardArray[row][col] << " ";
        }
        cout << endl;
    }
 **/   
    // cin a-i. Find letter in 2d array, change it to X.
  //  cin >> temp;
  //  boardArray[temp] = X;
    
    chooseLetter();
    
    return 0;
}


void chooseLetter() {
    
    string temp;

   // Build Initial Array Board 
    string boardArray[3][3] {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"}
    };
    
    int i = 0;
    int x = 0;
    while (i < 3) {
    

        // Check if Win/Lose condition is met.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                x++;
                if (x == 3) {
                    i = 0;
                }
                if (boardArray[row][col] == "X") {
                    i++;
                }
             //   cout << boardArray[row][col] << " ";
            }
        }
        
        
        // Print Out boardArray.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << " ";
            }
            cout << endl;
        }
        
        cout << "------------------------------------------" << endl;
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "You are X's. Type a letter to place your X." << endl;
        cin >> temp;
        cout << endl;
        // Replace chosen spot with X.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (boardArray[row][col] == temp) {
                    boardArray[row][col] = "X";
                }
             //   cout << boardArray[row][col] << " ";
            }
            //cout << endl;
        }
    }
    if (i > 2) {
        // Print Out boardArray.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl << "Goodjob, You Won!";
    }
}
