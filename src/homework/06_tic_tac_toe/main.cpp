#include <iostream>
#include "tic_tac_toe.h"

int main() {
    TicTacToe game;
    std::string first_player;
    char choice;

    do {
        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;
        game.start_game(first_player);

        while (!game.game_over()) {
            game.display_board();
            int position;
            std::cout << "Enter position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        std::cout << "Game over! Would you like to play again? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y');

    return 0;
}
