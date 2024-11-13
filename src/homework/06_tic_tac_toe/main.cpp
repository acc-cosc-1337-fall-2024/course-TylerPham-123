#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    TicTacToe game;
    TicTacToeManager games;
    std::string first_player;
    int x, o, t;

    while (true) {
        std::cout << "Enter the first player (X or O): ";
        std::cin >> first_player;

        while (first_player != "X" && first_player != "O")
        {
            std::cout << "Invalid input. Please enter 'X' or 'O' for the game to start." << std::endl;
            std::cout << "Enter the first player (X or O): ";
            std::cin >> first_player;
        }

        game.start_game(first_player);

        while (!game.game_over())
        {
            game.display_board();
            int position;
            std::cout << game.get_player() << "'s turn. Enter a position (1-9): ";
            std::cin >> position;

            while (position < 1 || position > 9)
            {
                std::cout << "Invalid position. Please enter a number between 1 and 9." << std::endl;
                std::cout << game.get_player() << "'s turn. Enter a position (1-9): ";
                std::cin >> position;
            }

            game.mark_board(position);
        }

        game.display_board();

        if (game.get_winner() == "C")
            std::cout << "It is a tie losers." << std::endl;
        else
            std::cout << "The winner is: " << game.get_winner() << std::endl;

        games.save_game(game);

        games.get_winner_total(x, o, t);

        std::cout << "X's wins" << std::setw(9) << "- " << x << std::endl;
        std::cout << "O's wins" << std::setw(9) << "- " << o << std::endl;
        std::cout << "Number of tie" << std::setw(4) << "- " << t << std::endl;
        std::string play_again;
        std::cout << "Do you guys wanna play again? (Y/N): ";
        std::cin >> play_again;

        while (play_again != "Y" && play_again != "N")
        {
            std::cout << "Only 'Y' or 'N'. Please try again." << std::endl;
            std::cout << "Do you want to play again? (Y/N): ";
            std::cin >> play_again;
        }

        if (play_again == "N")
            break;
    }

    return 0;
}
