//
// Created by matti on 17.06.2024.
//

#include "horizontal_bot.hpp"

int const HorizontalBot::decide() {
    int result = currentChoice;
    currentChoice = (currentChoice % 7) + 1;
    return result;
}
