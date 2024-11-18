//h
#include "tic_tac_toe.h"
#include <memory>
#ifndef TIC_TAC_TOE_MANAGER_H 
#define TIC_TAC_TOE_MANAGER_H

using std::unique_ptr;

class TicTacToeManager
{
public:
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& w, int& t) {o = x_win; w = o_win; t = ties;};
    void display_games() const {};
private:
    std::vector <unique_ptr<TicTacToe>> games;

//Private members
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

//Private functions
    void update_winner_count(std::string winner);
};

#endif
