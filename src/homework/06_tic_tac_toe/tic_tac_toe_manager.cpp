//cpp
#include "tic_tac_toe_manager.h"

//public functions of class TicTacToeManager
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b -> get_winner());

    games.push_back(move(b));
}

void TicTacToeManager::display_games() const {
    for (const auto& game : games) {
        // Determine the game type
        std::string game_type = (game->pegs.size() == 9) ? "TicTacToe3" : "TicTacToe4";
        std::cout << "Game Type: " << game_type << "\n";

        // Display the board
        int size = static_cast<int>(std::sqrt(game->pegs.size()));
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                std::cout << game->pegs[i * size + j];
                if (j < size - 1) std::cout << " | ";
            }
            std::cout << "\n";
            if (i < size - 1) std::cout << std::string(size * 4 - 1, '-') << "\n";
        }

        // Display the winner
        std::cout << "Winner: " << game->get_winner() << "\n\n";
    }
}

//private functions of class TicTacToeManager
void TicTacToeManager::update_winner_count(std::string winner)
{   
    if (winner == "X") {x_win++;}
    else if (winner == "O") {o_win++;}
    else {ties++;}
}
