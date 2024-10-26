#include "tic_tac_toe.h"

// Check if the game is over by checking if the board is full
bool TicTacToe::game_over() {
    return check_board_full();
}

// Start the game by setting the first player and clearing the board
void TicTacToe::start_game(std::string first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player;
        clear_board();
    }
}

// Mark the board with the current player's symbol
void TicTacToe::mark_board(int position) {
    if (position >= 1 && position <= 9) {
        pegs[position - 1] = player;
        set_next_player();
    }
}

// Get the current player
std::string TicTacToe::get_player() const {
    return player;
}

// Display the Tic-Tac-Toe board
void TicTacToe::display_board() const {
    for (int i = 0; i < 9; i += 3) {
        std::cout << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << "\n";
        if (i < 6) {
            std::cout << "---------\n";
        }
    }
}

// Set the next player
void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

// Check if the board is full (no empty spaces left)
bool TicTacToe::check_board_full() const {
    for (const auto& peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

// Clear the board (reset all positions to empty)
void TicTacToe::clear_board() {
    for (auto& peg : pegs) {
        peg = " ";
    }
}
//cpp
