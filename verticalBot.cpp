#include "verticalBot.hpp"

int const VERTICALBOT::decide() {
    if (rowsPlayed >= rows) {
        if(column+1 > columns) {
            column = 0;
        }
        else {
            column += 1;
        }
    }

    return column;
}