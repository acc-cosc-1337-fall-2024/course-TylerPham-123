//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

//public functions of class TicTacToeManager
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game -> get_winner());

    games.push_back(move(game));
}

void TicTacToeManager::display_all_games()
{
    for (const auto &game:games)
    {
        game->display_board();
        std::cout << "The winner is: " << game->get_winner() << std::endl; //Print the winner underneath the board displayed
    }
}

//private functions of class TicTacToeManager
void TicTacToeManager::update_winner_count(std::string winner)
{   
    if (winner == "X") {x_win++;}
    else if (winner == "O") {o_win++;}
    else {ties++;}
}
