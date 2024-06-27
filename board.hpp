#include <iostream>
#ifndef BOARD_HPP_INCLUDED
#define BOARD_HPP_INCLUDED

class Board
{
public:
    Board(int x, int y)
        : m_y(y)
        , m_x(x)
    {
        for (int i = 0; i < m_y; i++)
        {
            for (int j = 0; j < m_x; j++)
            {
                field[i][j] = '-';
            }
        }
    }
    bool place(int column, char player);
    void display();
    bool check_winner(char player);
    int getsize();

private:
    int m_x;
    int m_y;
    char field[100][100];
};

#endif // BOARD_HPP_INCLUDED
