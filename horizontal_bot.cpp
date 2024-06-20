//
// Created by matti on 17.06.2024.
//

#include "horizontal_bot.hpp"

HorizontalBot::HorizontalBot(char name, int columns) : Player(name, columns), currentChoice(1) {}

int HorizontalBot::decide() {
    int result = currentChoice;
    currentChoice = (currentChoice % 7) + 1;
    return result;
}
