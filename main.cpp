#include "player.hpp"
#include "verticalBot.hpp"
#include "randomBot.hpp"
#include "horizontal_bot.hpp"
#include "human.hpp"
#include "board.hpp"
#include <iostream>

int main() {

    int width, height;
    std::cout << "Set board width:";
    std::cin >> width;
    std::cout << "Set board height:";
    std::cin >> height;
    std::cout << "\n";

    Board board(width, height);

    int pType;
    std::cout << "\n"
                 "Select Player type for Player 1:\n"
                 "1: Human\n"
                 "2: Horizontal Bot\n"
                 "3: Vertical Bot\n"
                 "4: Random Bot\n";

    PLAYER* player1;
    PLAYER* player2;
    do {
        std::cin >> pType;
        if (pType == 1) {
            player1 = new Human('O', width);
            break;
        }
        else if (pType == 2) {
            player1 = new HorizontalBot('O', width);
            break;
        }
        else if (pType == 3) {
            player1 = new VERTICALBOT('O', width, height);
            break;
        }
        else if (pType == 4) {
            player1 = new RANDOMBOT('O', width);
            break;
        }
        else {
            std::cout << "Invalid Player type! Try again:\n";
        }
    }while(1);

    std::cout << "\n"
                 "Select Player type for Player 2:\n"
                 "1: Human\n"
                 "2: Horizontal Bot\n"
                 "3: Vertical Bot\n"
                 "4: Random Bot\n";
    do {
        std::cin >> pType;
        if (pType == 1) {
            player2 = new Human('X', width);
            break;
        }
        else if (pType == 2) {
             player2 = new HorizontalBot('X', width);
            break;
        }
        else if (pType == 3) {
            player2 = new VERTICALBOT('X', width, height);
            break;
        }
        else if (pType == 4) {
            player2 = new RANDOMBOT('X', width);
            break;
        }
        else {
            std::cout << "Invalid Player type! Try again:\n";
        }
    }while(1);


    //End of game setup
    do {
        bool validMove;
        board.display();
        do {
            validMove = board.place(player1->decide(), player1->getName());
        }while(!validMove);

        std::cout << "\n----------------------------------------------------\n";

        board.display();
        do {
            validMove = board.place(player2->decide(), player2->getName());
        }while(!validMove);

        std::cout << "\n----------------------------------------------------\n";


    }while(!(board.check_winner(player1 -> getName()) || board.check_winner(player2 -> getName())));

    board.display();

    if(board.check_winner(player1 -> getName())) {
        std::cout << "Congratulations Player 1, you won!";
    }
    else {
        std::cout << "Congratulations Player 2, you won!";
    }

    delete player1;
    delete player2;
}
