#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Test game over when all 9 slots are selected") {
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    REQUIRE(!game.game_over());

    game.mark_board(2);
    REQUIRE(!game.game_over());

    game.mark_board(3);
    REQUIRE(!game.game_over());

    game.mark_board(4);
    REQUIRE(!game.game_over());

    game.mark_board(5);
    REQUIRE(!game.game_over());

    game.mark_board(6);
    REQUIRE(!game.game_over());

    game.mark_board(7);
    REQUIRE(!game.game_over());

    game.mark_board(8);
    REQUIRE(!game.game_over());

    game.mark_board(9);
    REQUIRE(game.game_over());
}
