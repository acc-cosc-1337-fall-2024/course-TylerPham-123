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
    else if (check_board_full() == true)
    {
        cout << "It is a tie.";
    }
    else if (check_column_win() == false || check_row_win() == false || check_diagonal_win() == false)
    {
        winner = 'C';
        return true;
    }
    else {return false;}
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
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
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

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") {return true;}
    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") {return true;}
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") {return true;}
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") {return true;}
    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") {return true;}
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") {return true;}
}