
#ifndef PLAYER

class PLAYER {
    
    public:
        PLAYER(char x, int columns_in): 
            id(x),
            columns(columns_in)
            {}
        virtual ~PLAYER(){};

        char const getName();

        virtual int const decide();

    protected:
        char const id;
        int const columns;
};

#endif //end of definition PLAYER