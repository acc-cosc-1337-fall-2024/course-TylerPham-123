//h
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3_H 
#define TIC_TAC_TOE_3_H

class TicTacToe3 : public TicTacToe //This class inherites from class TicTacToe.
{
    TicTacToe3() : TicTacToe(3){} //Default constructor with no parameter

private:
//Private functions
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

};

#endif