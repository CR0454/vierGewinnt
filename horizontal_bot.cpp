//
// Created by matti on 17.06.2024.
//

#include "horizontal_bot.hpp"

HorizontalBot::HorizontalBot(char name) : Player(name), currentChoice(1) {}

int HorizontalBot::choice() {
    int result = currentChoice;
    currentChoice = (currentChoice % 7) + 1;
    return result;
}
