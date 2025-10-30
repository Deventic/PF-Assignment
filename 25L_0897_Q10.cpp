#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    while (true) {
        char b1 = ' ', b2 = ' ', b3 = ' ', b4 = ' ', b5 = ' ', b6 = ' ', b7 = ' ', b8 = ' ', b9 = ' ';
        int mode;
        int moveCount = 0;
        bool playerTurn = true;
        bool gameOver = false;

        cout << "Choose Mode:\n1. Player vs Computer\n2. Player vs Player\nEnter choice: ";
        cin >> mode;

        cout << "\n--- Tic Tac Toe ---\n";
        cout << "Positions:\n";
        cout << " 1 | 2 | 3\n";
        cout << "---+---+---\n";
        cout << " 4 | 5 | 6\n";
        cout << "---+---+---\n";
        cout << " 7 | 8 | 9\n\n";

        while (!gameOver && moveCount < 9) {

            cout << " " << b1 << " | " << b2 << " | " << b3 << "\n";
            cout << "---+---+---\n";
            cout << " " << b4 << " | " << b5 << " | " << b6 << "\n";
            cout << "---+---+---\n";
            cout << " " << b7 << " | " << b8 << " | " << b9 << "\n\n";

            int pos;
            
            if (playerTurn || mode == 2) {
                cout << "Player " << (playerTurn ? "1 (X)" : "2 (O)") << ", enter position (1-9): ";
                cin >> pos;
            } else {
                do { pos = rand() % 9 + 1; } 
                while ((pos == 1 && b1 != ' ') || (pos == 2 && b2 != ' ') || (pos == 3 && b3 != ' ') ||
                       (pos == 4 && b4 != ' ') || (pos == 5 && b5 != ' ') || (pos == 6 && b6 != ' ') ||
                       (pos == 7 && b7 != ' ') || (pos == 8 && b8 != ' ') || (pos == 9 && b9 != ' '));
                cout << "Computer chooses: " << pos << "\n";
            }

            char mark = playerTurn ? 'X' : 'O';
            bool valid = true;

            if (pos == 1 && b1 == ' ') b1 = mark;
            else if (pos == 2 && b2 == ' ') b2 = mark;
            else if (pos == 3 && b3 == ' ') b3 = mark;
            else if (pos == 4 && b4 == ' ') b4 = mark;
            else if (pos == 5 && b5 == ' ') b5 = mark;
            else if (pos == 6 && b6 == ' ') b6 = mark;
            else if (pos == 7 && b7 == ' ') b7 = mark;
            else if (pos == 8 && b8 == ' ') b8 = mark;
            else if (pos == 9 && b9 == ' ') b9 = mark;
            else valid = false;

            if (!valid) {
                cout << "Invalid move! Try again.\n";
                continue;
            }

            moveCount++;

            char winner = ' ';
            if (b1 == b2 && b2 == b3 && b1 != ' ') winner = b1;
            else if (b4 == b5 && b5 == b6 && b4 != ' ') winner = b4;
            else if (b7 == b8 && b8 == b9 && b7 != ' ') winner = b7;
            else if (b1 == b4 && b4 == b7 && b1 != ' ') winner = b1;
            else if (b2 == b5 && b5 == b8 && b2 != ' ') winner = b2;
            else if (b3 == b6 && b6 == b9 && b3 != ' ') winner = b3;
            else if (b1 == b5 && b5 == b9 && b1 != ' ') winner = b1;
            else if (b3 == b5 && b5 == b7 && b3 != ' ') winner = b3;

            if (winner != ' ') {
                cout << "\nFinal Board:\n";
                cout << " " << b1 << " | " << b2 << " | " << b3 << "\n";
                cout << "---+---+---\n";
                cout << " " << b4 << " | " << b5 << " | " << b6 << "\n";
                cout << "---+---+---\n";
                cout << " " << b7 << " | " << b8 << " | " << b9 << "\n\n";

                if (mode == 1 && !playerTurn)
                    cout << "Computer wins!\n";
                else
                    cout << "Player " << (winner == 'X' ? 1 : 2) << " wins!\n";
                gameOver = true;
            } else if (moveCount == 9) {
                cout << "Game Drawn!\n";
                gameOver = true;
            }

            playerTurn = !playerTurn;
        }

        char again;
        cout << "Do you want to play again? (Y/N): ";
        cin >> again;
        if (tolower(again) != 'y')
            break;
    }

    return 0;
}
