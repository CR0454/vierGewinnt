#include "player.hpp"

class RANDOMBOT: public PLAYER
{
    public:
        RANDOMBOT(char x, int columns_in): 
            PLAYER(x, columns_in)
            {}

        int const decide() override;


};