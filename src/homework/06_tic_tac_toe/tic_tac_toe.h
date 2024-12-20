
//h
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H 
#define TIC_TAC_TOE_H

class TicTacToe
{
//Private members
    std::string player;
    std::string winner;

//Private functions
    void clear_board();
    void set_next_player();
    bool check_board_full();
    void set_winner();

public:
//Public functions
    TicTacToe(int size) : pegs(size * size, " "){} //Constructor 
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
    std::string get_winner() {return winner;}

protected:
//Protected variables
    std::vector<std::string> pegs;

//Protected virtual functions
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
};

#endif
