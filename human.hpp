//
// Created by matti on 17.06.2024.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "player.hpp"

class Human : public PLAYER {
public:
    Human(char name, int columns);

    int decide() override;
};

#endif // HUMAN_HPP
