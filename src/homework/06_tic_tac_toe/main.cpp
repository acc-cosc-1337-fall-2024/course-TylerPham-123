#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include <iomanip>

using std::cout; using std::cin; using std::endl;

int main()
{
    std::unique_ptr<TicTacToe> game;
    TicTacToeManager games;
    std::string first_player;
    int x, o, t, player_option;

    //tic_tac_toe
    while (true)
    {   
        do //Ask the user if the user want to play TicTacToe3 or TicTacToe4
        {
            cout << "MENU" << endl;
            cout << "1 - 3*3 tic tac toe game" << endl;
            cout << "2 - 4*4 tic tac toe game" << endl;
            cout << "Enter your option - ";
            cin >> player_option;

            while (player_option != 1 && player_option != 2)
            {
                cout << "Your number is out of range." << endl;
                cout << "Please try again." << endl;
                cout << "Enter your option - ";
                cin >> player_option;
            }


            if (player_option == 1)
            {
                game = std::make_unique<TicTacToe3>(); 
            }
            else if (player_option == 2)
            {
                game = std::make_unique<TicTacToe4>();
            }
            
        } while (player_option != 1 && player_option != 2);

        cout << "Enter the first player (X or O): ";
        cin >> first_player;

        while (first_player != "X" && first_player != "O")
        {
            cout << "Invalid input. Please enter 'X' or 'O' for the game to start." << endl;
            cout << "Enter the first player (X or O): ";
            cin >> first_player;
        }

        game->start_game(first_player);

        while (!game->game_over())
        {
            game->display_board();
            int position;
            
            if (player_option == 1)
            {
                cout << game->get_player() << "'s turn. Enter a position (1-9): ";
                cin >> position;

                while (position < 1 || position > 9)
                {
                    cout << "Invalid position. Please enter a number between 1 and 9." << endl;
                    cout << game->get_player() << "'s turn. Enter a position (1-9): ";
                    cin >> position;
                }
            }
            else if (player_option == 2)
            {
                cout << game->get_player() << "'s turn. Enter a position (1-16): ";
                cin >> position;

                while (position < 1 || position > 16)
                {
                    cout << "Invalid position. Please enter a number between 1 and 16." << endl;
                    cout << game->get_player() << "'s turn. Enter a position (1-16): ";
                    cin >> position;
                }
            }

            game->mark_board(position);
        }

        game->display_board();

        if (game->get_winner() == "C")
            cout << "It is a tie losers." << endl;
        else
            cout << "The winner is: " << game->get_winner() << endl;

    //tic_tac_toe_manager
        games.save_game(game); //I kept it as 'game' because '*game' didnt work.

        games.get_winner_total(x, o, t);

        cout << "X's wins" << std::setw(9) << "- " << x << endl;
        cout << "O's wins" << std::setw(9) << "- " << o << endl;
        cout << "Number of tie" << std::setw(4) << "- " << t << endl;
        std::string play_again;
        cout << "Do you guys wanna play again? (Y/N): ";
        cin >> play_again;

        while (play_again != "Y" && play_again != "N")
        {
            cout << "Only 'Y' or 'N'. Please try again." << endl;
            cout << "Do you want to play again? (Y/N): ";
            cin >> play_again;
        }

        if (play_again == "N")
            break;
    }

    return 0;
}
