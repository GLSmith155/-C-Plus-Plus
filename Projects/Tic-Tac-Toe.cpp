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
    int y = 0;
    int f = 0;
    int r = 0;
    int vertLose = 0;
    int horizLose = 0;
    int horizWin = 0;
    
    cout << "Welcome to Tic-Tac-Toe!" << endl;
   
   // Build Initial Array Board 
    string boardArray[3][3] {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"}
    };
    
    while (i < 3 && horizWin < 3 && vertLose < 3 && horizLose < 3) {
        
        x = 0;
        y = 0;
        f = 0;
        r = 0;
        horizWin = 0;
        vertLose = 0;
        horizLose = 0;
        i = 0;
        
        // Check if diagnol win condition has been met.
        if (boardArray[0][0] == "X") {
            if (boardArray[1][1] == "X") {
                if (boardArray[2][2] == "X") {
                    i = 3;
                    x = -50;
                    y = -50;
                }
             }
        }
        if (boardArray[0][2] == "X") {
            if (boardArray[1][1] == "X") {
                if (boardArray[0][2] == "X") {
                    i = 3;
                    x = -50;
                    y = -50;
                }
             }
        }    
        
        // Check if diagnol lose condition has been met.
        if (boardArray[0][0] == "O") {
            if (boardArray[1][1] == "O") {
                if (boardArray[2][2] == "O") {
                    vertLose = 3;
                    r = -50;
                    f = -50;
                }
             }
        }
        if (boardArray[0][2] == "O") {
            if (boardArray[1][1] == "O") {
                if (boardArray[0][2] == "O") {
                    vertLose = 3;
                    r = -50;
                    f = -50;
                }
             }
        } 
        

        
        // Check if horizontal and vertical win/lose condition is met.
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                
                // Horizontal Win condition.
                if (x > 2) {
                    horizWin = 0;
                    x = 0;
                }
                if (boardArray[row][col] == "X") {
                    horizWin++;
                    if (horizWin > 2) {
                        x = -9;
                    }
                    x++;
                }
                else {
                    x++;
                }
                
                // Vertical win condition;
                if (y > 2) {
                    i = 0;
                    y = 0;
                } 
                if (boardArray[col][row] == "X") {
                    i++;
                    if (i > 2) {
                        y = -20;
                    }
                    y++;
                }
                else {
                    y++;
                }
                
                // Horizontal lose condition.
                if (r > 2) {
                    horizLose = 0;
                    r = 0;
                }
                if (boardArray[row][col] == "O") {
                    horizLose++;
                    if (horizLose > 2) {
                        r = -9;
                    }
                    r++;
                }
                else {
                    r++;
                }
                
                // Vertical lose condition;
                if (f > 2) {
                    vertLose = 0;
                    f = 0;
                } 
                if (boardArray[col][row] == "O") {
                    vertLose++;
                    if (vertLose > 2) {
                        f = -20;
                    }
                    f++;
                }
                else {
                    f++;
                }
            }
        }
        cout << endl << "f is " << f << endl << "r is " << r << endl;
        cout << "vertLose is " << vertLose << endl;
        cout << "i is " << i << endl;
        cout << "horizWin is " << horizWin << endl;
        // If we haven't won or lost yet, computer will go then the user.
        if (horizWin < 3 && i < 3 && vertLose < 3 && horizLose < 3) {
            
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
        
        
                
            // Print Out boardArray.
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    cout << boardArray[row][col] << "   ";
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
    if (i > 2 || horizWin > 2) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << "   ";
            }
            cout << endl;
        }
        cout << endl << "Goodjob, You Won!";
    }
    
    // Print out loss message.
    if (horizLose > 2 || vertLose > 2) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << "   ";
            }
            cout << endl;
        }
        cout << endl << "Sorry, you lost!";
    }
}
