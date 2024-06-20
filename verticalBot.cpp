#include "verticalBot.hpp"

int const VERTICALBOT::decide() {
    if (rowsPlayed >= rows) {
        rowsPlayed = 0;
        column = (column+1) % columns;
    }
    rowsPlayed += 1;
    return column;
}