//
// Created by matti on 13.06.2024.
//

#include "player.hpp"

Player::Player(char name) : name(name) {}

char Player::getName() const {
    return name;
}
