//
// Created by matti on 18.06.2024.
//

#include "human.hpp"
#include <iostream>

Human::Human(char name) : Player(name) {}

int Human::choice() {
    int num;
    std::cout << "Reihe: ";
    std::cin >> num;
    return num;
}
