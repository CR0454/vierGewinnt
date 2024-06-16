#include "randomBot.hpp"
#include <random>


int const RANDOMBOT::decide() {

    //random number generator
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(0, columns-1);
    int r_number = distribution(generator);

    return r_number;

}
