//
// Created by matti on 13.06.2024.
//
#include <iostream>
#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
private:
    char name;
public:
    Player(char name);

    virtual char getName() const;

    virtual ~Player() = default;

    virtual int choice() = 0;
};

#endif // PLAYER_HPP
