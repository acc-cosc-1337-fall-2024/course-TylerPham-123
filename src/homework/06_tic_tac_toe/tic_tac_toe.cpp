//cpp
#include "tic_tac_toe.h"

//public functions of class TicTacToe
bool TicTacToe::game_over() //What does this function do?
//Why does it need to be TicTacToe::game_over() ? To access the class, right?
{
    return false;
}

void TicTacToe::star_game(std::string first_player)
{
    player = first_player;
}

	
void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
}
//private functions of class TicTacToe
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}