/** Project:  Tic-Tac-Toe with computer opponent.
 * Make a 3x3 2d array and represent these visually with
 * X's and O's. After every move, the board will print, and
 * upon getting 3 in a row "victory" or "you lose" will be printed. 
**/

#include <iostream>
#include <cstdlib>
#include <chrono>
#include <random>
using namespace std;

void chooseLetter(int vertWin, int vertLose, int horizLose, int horizWin);
void checkForWin(string boardArray[3][3], int& vertWin, int& vertLose, int& horizLose, int& horizWin);

int main() {
    
    // Integer variables that I will use to find a vertical or horizontal win or loss.
    int vertWin = 0;
    int horizWin = 0;
    int vertLose = 0;
    int horizLose = 0;
    
    chooseLetter(vertWin, vertLose, horizLose, horizWin);
    
    return 0;
}

// This function houses the while loop that runs the tic-tac-toe game.
// Inside it also calls the checkForWin function after each player and computer move happens.
void chooseLetter(int vertWin, int vertLose, int horizLose, int horizWin) {

    // cin variable for the user's move.
    string temp;
    
    // Used to indicate that a draw has been reached.
    int drawCounter = 0;
    
    cout << "Welcome to Tic-Tac-Toe!" << endl;
   
   // Creates Initial 2D-Array Board.
    string boardArray[3][3] {
        {"a", "b", "c"},
        {"d", "e", "f"},
        {"g", "h", "i"}
    };
    
    while (vertWin < 3 && horizWin < 3 && vertLose < 3 && horizLose < 3 && drawCounter < 6) {
        
        drawCounter++;
        
        // If we haven't won or lost yet, computer will go then the user.
        if (horizWin < 3 && vertWin < 3 && vertLose < 3 && horizLose < 3 && drawCounter < 6) {
            
            // Computer's Turn to place a "O" on the board.
            random_device dev;
            mt19937 rng(dev());
            uniform_int_distribution<std::mt19937::result_type> dist6(0,2); // distribution in range [1, 6]
        
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
            
            // Calls the checkForWin function since the computer just moved.
            checkForWin(boardArray, vertWin, vertLose, horizLose, horizWin);
            
            if (horizWin < 3 && vertWin < 3 && vertLose < 3 && horizLose < 3 && drawCounter < 5) {
            
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
                // Calls the checkForWin function since the user just moved.
                checkForWin(boardArray, vertWin, vertLose, horizLose, horizWin);
            }
        }
    } 
    
    // After while loop is exited either a victory, loss, or draw message is given:
    // Print out victory message.
    if (vertWin > 2 || horizWin > 2) {
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
    
    // Print out draw message.
    if (drawCounter > 4) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cout << boardArray[row][col] << "   ";
            }
            cout << endl;
        }
        cout << endl << "There's been a tie!";
    }
}

// Call this function to test if a win or lose condition has been met.
void checkForWin(string boardArray[3][3], int& vertWin, int& vertLose, int& horizLose, int& horizWin) {
    
    // These four variables are used as counters to see if 3 in a row has been achieved yet.
    // Each 3rd call they reset, so that a win or loss is only declared if 3 are in a row.
    int x = 0;
    int y = 0;
    int f = 0;
    int r = 0;
    
    horizWin = 0;
    vertLose = 0;
    horizLose = 0;
    vertWin = 0;
    
    // Check if diagnol win condition has been met.
    if (boardArray[0][0] == "X") {
        if (boardArray[1][1] == "X") {
            if (boardArray[2][2] == "X") {
                vertWin = 3;
                x = -50;
                y = -50;
            }
         }
    }
    if (boardArray[0][2] == "X") {
        if (boardArray[1][1] == "X") {
            if (boardArray[2][0] == "X") {
                vertWin = 3;
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
            if (boardArray[2][0] == "O") {
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
                vertWin = 0;
                y = 0;
            } 
            if (boardArray[col][row] == "X") {
                vertWin++;
                if (vertWin > 2) {
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
}
