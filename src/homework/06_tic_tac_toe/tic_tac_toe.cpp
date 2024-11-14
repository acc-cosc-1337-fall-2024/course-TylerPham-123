//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

//public functions of class TicTacToe
bool TicTacToe::game_over()
{
   if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
   {
        set_winner();
        return true;
   }

   else if(check_board_full() == true)
   {
        winner = "C";
        return true;
   }

   else 
   {
        return false;
   }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (long unsigned int i=0; i < pegs.size(); i += 3)
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

//private functions of class TicTacToe
void TicTacToe::clear_board()
{
    for (auto& peg: pegs) {peg = " ";}
}

void TicTacToe::set_next_player()
{
    if (player == "X") {player = "O";}
    else {player = "X";}
}

bool TicTacToe::check_board_full()
{
    for (long unsigned int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::set_winner() 
{
    if (player == "X") {winner = "O";}
    else {winner = "X";}
}

bool TicTacToe::check_column_win() 
{
    for (int i = 0; i < 3; ++i)
    {
        if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;

}

bool TicTacToe::check_diagonal_win() 
{
    return (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") ||
           (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ");
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 3; ++i)
    {
        if (pegs[i * 3] == pegs[i * 3 + 1] && pegs[i * 3 + 1] == pegs[i * 3 + 2] && pegs[i * 3] != " ")
        {
            return true;
        }
    }
    return false;
}
