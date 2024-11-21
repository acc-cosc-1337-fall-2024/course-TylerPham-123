#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
using std::string;
//A good quality code needs TEST_CASE for each function.

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
    TicTacToe3 game;

    game.start_game("X");
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
    TicTacToe3 game;

    game.start_game("O");
    REQUIRE(game.get_player() == "O");
}

//Test case for tic_tac_toe_3
TEST_CASE("Test game over if 9 slots are selected.")
{
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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
    TicTacToe3 game;
    
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

//Test case for tic_tac_toe_4
TEST_CASE("Test game over if 16 slots are selected.")
{
    TicTacToe4 game;
    
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
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
    game.mark_board(10);
	REQUIRE(game.game_over() == false);
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	game.mark_board(12);
	REQUIRE(game.game_over() == false);
	game.mark_board(14);
	REQUIRE(game.game_over() == false);
	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == false);
	game.mark_board(15);
	REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(13);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(10);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(14);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(11);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(15);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by fourth column, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(12);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(16);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by first row, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(10);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(11);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(12);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by fourth row, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(13);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(14);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(15);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(16);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(11);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == false);
    game.mark_board(16);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left, tic_tac_toe_4")
{
    TicTacToe4 game;
    
    game.start_game("X");
    
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
    REQUIRE(game.game_over() == false);
    game.mark_board(10);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == false);
    game.mark_board(13);
    REQUIRE(game.game_over() == true);

    REQUIRE(game.get_winner() == "X");
}

//Test case for tic_tac_toe_manager
TEST_CASE("Test TicTacToe manager get winner total function")
{
    //Test TicTacToe manager get winner total function
    //Simulate playing 3 or more games with X, O, and C as winners
    //Verify that that x_win, o_win, and ties tally correctly

    TicTacToeManager games;
    int x, o, t;
        

    {
        TicTacToe3 game;
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


        auto gamePtr = std::make_unique<TicTacToe>(game);
        games.save_game(gamePtr);
    }

    {
        TicTacToe3 game;
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
        

        auto gamePtr = std::make_unique<TicTacToe>(game);
        games.save_game(gamePtr);
    }

    {
        TicTacToe3 game;
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
        
        auto gamePtr = std::make_unique<TicTacToe>(game);
        games.save_game(gamePtr);
    }
    
    games.get_winner_total(x, o, t);

    REQUIRE(x == 1);
    REQUIRE(o == 1);
    REQUIRE(t == 1);
}
