//
// Created by matti on 18.06.2024.
//

#include "human.hpp"

int const Human::decide() {
    int num;
    std::cout << "Reihe:";
    std::cin >> num;
    return num-1;
}
