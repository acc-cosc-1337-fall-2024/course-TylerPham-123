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

void TicTacToe::display_board() const // I have to modify the display_board to make it works with the TicTacToe3 and TicTacToe4.
{
    if (pegs.size() == 9)
    {
        for (long unsigned int i=0; i < pegs.size(); i += 3)
        {
            cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
        }
    }
    else if (pegs.size() == 16)
    {
        for (long unsigned int i=0; i < pegs.size(); i += 4)
        {
            cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "|" << pegs[i + 3] << "\n";
        }
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
    return false;
}

bool TicTacToe::check_diagonal_win() 
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}
