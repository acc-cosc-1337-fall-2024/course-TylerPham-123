//h
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H //What does this line do?
#define TIC_TAC_TOE_H //What does this line do?

class TicTacToe
{
public: //What does this line do?
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
private: //What does this line do?
    std::string player;
    std::vector<std::string> pegs{9, " "}; //This defines pegs as a vector of string 
    void clear_board();
    void set_next_player();
    bool check_board_full();

};

#endif //What does this line do?