//
// Created by matti on 17.06.2024.
//

#ifndef HORIZONTAL_BOT_HPP
#define HORIZONTAL_BOT_HPP

#include "player.hpp"

class HorizontalBot : public PLAYER {
    private:
        int currentChoice;
    public:
        HorizontalBot(char name, int columns): PLAYER(name, columns), currentChoice(1) {}

        int const decide() override;
};

#endif // HORIZONTAL_BOT_HPP
