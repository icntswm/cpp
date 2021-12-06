#ifndef KAREN_H
# define KAREN_H
# include <iostream>

class Karen
{
private:
    enum levels{
        DEBUG,
        INFO,
        WARNING,
        ERROR,
    };
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Karen();
    ~Karen();
    void complain(std::string level);
    void filterComplain(int point);
};

#endif