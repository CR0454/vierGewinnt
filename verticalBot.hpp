#include "player.hpp"
#include <random>

class VERTICALBOT: public PLAYER 
{
    public:
        VERTICALBOT(char x, int columns_in, int rows_in):
            PLAYER(x, columns_in),
            rows(rows_in),
            rowsPlayed(0)
            {
                //random number generator
                std::random_device device;
                std::mt19937 generator(device());
                std::uniform_int_distribution<int> distribution(0, columns-1);
                column = distribution(generator);
                
            }

        int const decide() override;

    private:
        int column;
        int const rows;
        int rowsPlayed;
};