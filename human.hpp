//
// Created by matti on 17.06.2024.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "player.hpp"

class Human : public Player {
public:
    Human(char name);

    int choice() override;
};

#endif // HUMAN_HPP
