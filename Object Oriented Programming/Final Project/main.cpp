#include "main.h"

// Static members initialization
bool Player::computerTurn = false;
char Player::board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

// Function to determine if the game has finished
bool gameFinished() {
    char winner = Player::checkWinner();
    if (winner == 'O') {
        cout << "Human wins!\n";
        return true;
    } else if (winner == 'X') {
        cout << "Computer wins!\n";
        return true;
    } else if (winner == 'D') {
        cout << "It's a draw!\n";
        return true;
    }
    return false;
}

int main() {
    HumanPlayer human;
    ComputerPlayer computer;

    // Example game loop
    while (true) {
        if (Player::computerTurn) {
            computer.play();
        } else {
            human.play();
        }

        if (gameFinished()) {
            Player::printBoard();
            break;
        }

        // Clear console for better gameplay (platform-specific)
        system("cls");
       
    }

    return 0;
}
