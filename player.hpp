#include <iostream>


#ifndef PLAYER

class PLAYER {
    
    public:
        PLAYER(char x, int columns_in): 
            name(x),
            columns(columns_in)
            {}
        virtual ~PLAYER(){};

        char const getName();

        virtual int const decide();

    protected:
        char const name;
        int const columns;
};

#endif //end of definition PLAYER