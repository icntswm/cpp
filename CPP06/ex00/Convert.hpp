#ifndef CONVERT_H
# define CONVERT_H
# include <iostream>

class Convert
{
private:
    char _sym;
    long _num_i;
    float _num_f;
    double _num_d;
    int _dot;
    int _sym_f;
    int _minus;
    bool _check_nan;
    bool _check_number;
    bool _num_after_dot;
public:
    Convert();
    ~Convert();
    void    handlingString(std::string const &toString);
    void    convertation(std::string const &toString);
    void    convertChar(std::string const &toString);
    void    convertInt(std::string const &toString);
    void    convertFloat(std::string const &toString);
    void    convertDouble(std::string const &toString);
    void    printConvert() const;
    class errorCharacter : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return("Error: invalid characters");
            }
    };
};

#endif