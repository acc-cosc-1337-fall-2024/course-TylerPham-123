#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::string;
//A good quality code needs TEST_CASE for each function.

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
    TicTacToe game;

    game.start_game("X");
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
    TicTacToe game;

    game.start_game("O");
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected.")
{
    TicTacToe game;
    
    game.start_game("X");

    game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
    TicTacToe game;
    
    game.start_game("X");
    
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test TicTacToe manager get winner total function")
{
    //Test TicTacToe manager get winner total function
    //Simulate playing 3 or more games with X, O, and C as winners
    //Verify that that x_win, o_win, and ties tally correctly

    TicTacToe game;
    TicTacToeManager games;
    int x, o, t;
    
    //Game 1
    game.start_game("X");

    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");

    games.save_game(game);

    //Game 2
    game.start_game("X");

    game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "C");
    
    games.save_game(game);

    //Game 3
    game.start_game("O");
    
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "O");
    
    games.save_game(game);
    
    games.get_winner_total(x, o, t);

    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}
