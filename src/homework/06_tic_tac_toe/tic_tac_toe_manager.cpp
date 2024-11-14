//cpp
#include "tic_tac_toe_manager.h"

//public functions of class TicTacToeManager
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);

    update_winner_count(b.get_winner());
}

//private functions of class TicTacToeManager
void TicTacToeManager::update_winner_count(std::string winner)
{   
    if (winner == "X") {x_win++;}
    else if (winner == "O") {o_win++;}
    else {ties++;}
}
