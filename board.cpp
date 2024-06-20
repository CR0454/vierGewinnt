#include <iostream>
#include "board.hpp"

bool Board::place(int column, char player)
{
    int y=Board::m_y;
    while(y>=0)
    {
        if(Board::field[y][column] == 'X')
        {
            Board::field[y][column] = player;
            return 1; //valid move
        }
        else
        {
            y--;
        }
    }
    return 0;  //invalid move
}
void Board::display()
{
    for(int i=0;i< Board::m_y;i++){
        for (int j=0;j< Board::m_x;j++){
            std::cout<< field[i][j];}
            std::cout << std::endl;

}
}
bool Board::check_winner(char player)
{
    for(int i=0;i< Board::m_y;i++){
        for (int j=0;j< Board::m_x;j++){

            if(field[i][j] == player)
            {
               int k=0;
               while(k<4)
               {
                if(field[i+k][j] == player)  //Horizontal
                {
                    k=k+1;
                }
                else if(field[i][j+k]==player) //Vertikal
                {
                    k=k+1;
                }
                else if(field[i+k][j+k]==player) //Diagonal rechts
                {
                    k=k+1;
                }
                 else if(field[i-k][j+k]==player) //Diagonal links
                {
                    k=k+1;
                }

                else //Kein Sieg
                {
                    return 0;
                }
               }
               return 1;
            }

        }
    }
}

int Board::getsize()
{
   return Board::m_x, Board::m_y; //Gibt die Anzahl der Säulen zurück + Höhe des Boards

}