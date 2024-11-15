//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H 
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe //This class inherites from class TicTacToe.
{
    TicTacToe4() : TicTacToe(4){} //Default constructor with no parameter

private:
//Private functions
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

};

#endif