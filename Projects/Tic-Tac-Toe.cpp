/** Project: 
 * Tic-Tac-Toe with computer opponent.
**/

/** I'll make a 3x3 2d array and represent these visually with
 * X's and O's. After every move, the board will print, and
 * upon getting 3 in a row "victory" will be printed. 
 * Ideally I will make a function that allows for a user to 
 * play against the computer.
**/

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <random>
using namespace std;

void chooseLetter();
void printBoard();

int main() {
    
    chooseLetter();
    
    return 0;
}

void chooseLetter() {

    string temp;
    int i = 0;
    int x = 0;
    
    cout << "Welcome to Tic-Tac-Toe!" << endl;
   
   // Build Initial Array Board 
    string boardArray[3][3] {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"}
    };
    
    while (i < 3) {
        
        // Check if diagnol win/lose condition has been met.
        if (boardArray[0][0] == "X") {
             if (boardArray[1][1] == "X") {
                if (boardArray[2][2] == "X") {
                    i = 3;
                    break;
                }
             }
        }
         if (boardArray[0][2] == "X") {
             if (boardArray[1][1] == "X") {
                if (boardArray[0][2] == "X") {
                    i = 3;
                    break;
                }
             }
        }    
        x = 0;
        // Check if horizontal and vertical win/lose condition is met.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
           //     cout << "loop" << endl;
             //   cout << "x is " << x << endl;
           //     cout << "i is " << i << endl;
                if (x == 3) {
                    i = 0;
                    x = 0;
                }
                
                // Horizontal Checker.
                if (boardArray[row][col] == "X") {
                    i++;
                    if (i == 3) {
                        x = -9;
                    }
                    x++;
                }
                else {
                    x++;
                }
                
                // Vertical Checker;
                if (boardArray[col][row] == "X") {
                    i++;
                    if (i == 3) {
                        x = -9;
                    }
                    x++;
                }
                else {
                    x++;
                }
            //    if (boardArray[row][col] == "X") {
         //           i++;
              //      x++;
               // }

            }
        }
        
        // Computer's Turn.
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(0,2); // distribution in range [1, 6]
    
        int randSelection = 0;
        int randRow;
        int randCol;
        while (randSelection == 0) {

            randRow = dist6(rng);
            randCol = dist6(rng);

            if (boardArray[randRow][randCol] != "X" && boardArray[randRow][randCol] != "O") {
                boardArray[randRow][randCol] = "O";
                randSelection++;
            }
        }
        
        if (i < 3) {
                
            // Print Out boardArray.
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    cout << boardArray[row][col] << " ";
                }
                cout << endl;
            }
            
            cout << "------------------------------------------" << endl;
            cout << "You are X's. Type a letter to place your X." << endl;
            cin >> temp;
            cout << endl;
            // Replace chosen spot with X.
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (boardArray[row][col] == temp) {
                        boardArray[row][col] = "X";
                    }
                }
            }
        }
    }
    
    
    
    // Print out victory message if i is greater than 2.
    if (i > 2) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl << "Goodjob, You Won!";
    }
}
