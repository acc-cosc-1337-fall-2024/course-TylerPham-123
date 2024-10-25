#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToe::game_over()") //A good quality code needs TEST_CASE for each function.
{
	TicTacToe game; //What does this line do?

	REQUIRE(game.game_over() == true); //Why does it need to be game.game_over() ?
}