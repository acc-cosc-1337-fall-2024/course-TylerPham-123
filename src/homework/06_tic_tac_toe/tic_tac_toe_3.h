//h
#ifndef TIC_TAC_TOE_3_H 
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe //This class inherites from class TicTacToe.
{
//Private functions
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

public:
//Public constructor
    TicTacToe3() : TicTacToe(3){} //An initializer to initialize TicTacToe with a value of 3.

};

#endif