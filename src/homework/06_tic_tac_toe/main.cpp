//Note from Thu Oct 24 - This program needs to be fixed.
//First thing - When you enter something different than 'X' or 'O' for first_player,
//it will display that "something." - Has fixed.

//Second thing - The code allows you to rewrite the position that has already been written.
//This is against the rule of the TicTacToe. - Still on progress.
#include "tic_tac_toe.h"

#include <iostream>
#include <string>

using std::cout; using std::cin;

int main() 
{
	TicTacToe game;
	std::string first_player;
	char user_choice = 'y';

	do
	{
		cout << "Enter first player (X/O) - ";
		cin >> first_player;

		while(first_player != "O" && first_player != "X")
		{
			cout << "Only enter 'X' or 'O' please - ";
			cin >> first_player;
		}

		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout << "Enter a position - ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}

		cout << "Play again? (y/n) - ";
		cin >> user_choice;
	}while(tolower(user_choice) == 'y');
	

	return 0;
}