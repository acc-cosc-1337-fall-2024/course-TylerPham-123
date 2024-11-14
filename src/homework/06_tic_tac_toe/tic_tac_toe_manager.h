//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H 
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int& t) {o = x_win; w = o_win; t = ties;};

private:
    std::vector <TicTacToe> games;

//Private members
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

//Private functions
    void update_winner_count(std::string winner);
};
#endif
