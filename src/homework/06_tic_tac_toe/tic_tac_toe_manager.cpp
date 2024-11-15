//cpp
#include "tic_tac_toe_manager.h"

//public functions of class TicTacToeManager
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b -> get_winner());

    games.push_back(move(b));
}

/*void TicTacToeManager::dislay_all_games()
{
    for (const auto& game : games) {game -> display();}
}
*/

//private functions of class TicTacToeManager
void TicTacToeManager::update_winner_count(std::string winner)
{   
    if (winner == "X") {x_win++;}
    else if (winner == "O") {o_win++;}
    else {ties++;}
}
