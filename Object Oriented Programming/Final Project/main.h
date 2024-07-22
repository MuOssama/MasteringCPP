#ifndef MAIN_H
#define MAIN_H

#include <iostream>
using namespace std;

#define Human true
#define Computer false

class Player {
private:
    bool computer;

public:
    static bool computerTurn;
    static char board[9];

    // Constructor
    Player(bool playerType) : computer(playerType) {
        if (playerType == false) {
            cout << "\nPlayer is set to Human!";
        } else if (playerType == true) {
            cout << "\nPlayer is set to Computer!";
        } else {
            cout << "Error: You must pass true if it's human and false if it's computer.";
            cout << "\nPlayer is set to Human!";
            computer = true;
        }
    }

    // Pure virtual function to be overridden by derived classes
    virtual void play() = 0;

    // Virtual destructor
    virtual ~Player() {}

    // Static function to print the board
    static void printBoard() {
        cout<<endl;
        for (int i = 0; i < 9; i++) {
            cout << board[i];
            if ((i + 1) % 3 == 0) {
                cout << endl;
            } else {
                cout << " | ";
            }
        }
        cout << endl;
    }

    // Function to check the winner
    static char checkWinner() {
        // Check rows, columns, and diagonals for a win
        int winPatterns[8][3] = {
            {0, 1, 2},  // Row 1
            {3, 4, 5},  // Row 2
            {6, 7, 8},  // Row 3
            {0, 3, 6},  // Column 1
            {1, 4, 7},  // Column 2
            {2, 5, 8},  // Column 3
            {0, 4, 8},  // Diagonal 1
            {2, 4, 6}   // Diagonal 2
        };

        for (auto& pattern : winPatterns) {
            if (board[pattern[0]] != ' ' &&
                board[pattern[0]] == board[pattern[1]] &&
                board[pattern[1]] == board[pattern[2]]) {
                return board[pattern[0]];  // Return the winner ('X' or 'O')
            }
        }

        for (int i = 0; i < 9; i++) {
            if (board[i] == ' ') {
                return ' ';  // Game is still ongoing
            }
        }

        return 'D';  // Game is a draw
    }
};

// Derived class for Human player
class HumanPlayer : public Player {
public:
    HumanPlayer() : Player(Human) {}

    void play() override {
        int cell;
        bool valid = false;
        // Print the board
        printBoard();
        while (!valid) {
            cout << "Your Turn (choose a position 1-9): ";
            cin >> cell;
            cell--;  // Adjust for 0-based index

            if (cell < 0 || cell >= 9 || board[cell] != ' ') {
                cout << "Invalid play. Try again.\n";
            } else {
                board[cell] = 'O';
                valid = true;
                computerTurn = true;
            }
        }
    }
    ~HumanPlayer(){
        cout<<"Human instance destroyed\n";
    }
};

// Derived class for Computer player
class ComputerPlayer : public Player {
public:
    ComputerPlayer() : Player(Computer) {}

    void play() override {
        cout << "Computer's turn\n";
        for (int i = 0; i < 9; i++) {
            if (board[i] == ' ') {
                board[i] = 'X';  // Simple AI that places 'X' in the first available spot
                computerTurn = false;
                break;
            }
        }
    }
    ~ComputerPlayer(){
        cout<<"Computer instance destroyed\n";
    }
};

// Function to determine if the game has finished
bool gameFinished();

#endif
