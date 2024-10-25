//h
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H //What does this line do?
#define TIC_TAC_TOE_H //What does this line do?

class TicTacToe
{
public: //What does this line do?
    bool game_over();
    void star_game(std::string first_player);
    void mark_board(int position);
private: //What does this line do?
    std::string player;
    std::vector<std::string> pegs{9, " "};
    void clear_board();
};

#endif //What does this line do?