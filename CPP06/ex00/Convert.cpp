#include "Convert.hpp"

Convert::Convert()
    : _sym('\0'), _num_i(0), _num_f(0.0f), _num_d(0.0), _dot(0), _sym_f(0), _minus(0), _check_nan(false), _check_number(false), _num_after_dot(false)
{
    // std::cout << "\033[34m" << "Convert constructor called" << "\033[0m" << std::endl;
}

Convert::~Convert()
{
    // std::cout << "\033[34m" << "Convert destructor called" << "\033[0m" << std::endl;
}

void    Convert::handlingString(std::string const &toString) 
{
    int i = 0;

    while (toString[i])
    {
        if ((toString[i] >= '0' && toString[i] <= '9') || (toString[i] == '.' &&  toString.length() != 1)
            || (toString[i] == '-' && toString[i + 1] && (toString[i + 1] >= '0' && toString[i + 1] <= '9')))
        {
            if (i != 0)
                throw(Convert::errorCharacter());
            this->_check_number = true;
            while (toString[i] && ((toString[i] >= '0' && toString[i] <= '9') || toString[i] == '.' || toString[i] == '-' || toString[i] == 'f'))
            {
                if (toString[i] == '-')
                    _minus++;
                else if (toString[i] == '.')
                {
                    _dot++;
                    if (toString[i + 1] && (toString[i + 1] >= '0' && toString[i + 1] <= '9'))
                    {
                        _num_after_dot = true;
                        if (toString[i + 1] == '0' && ((toString[i + 2] && !(toString[i + 2] >= '0' && toString[i + 2] <= '9'))
                            || !toString[i + 2]))
                            _num_after_dot = false;
                    }
                }
                else if (toString[i] == 'f')
                {
                    _sym_f++;
                    i++;
                    break ;
                }
                i++;
            }
            if (toString[i] != '\0')
                throw(Convert::errorCharacter());
            else
                --i;
        }
        i++;
    }
    if (_dot > 1 || _minus > 1 || (_sym_f && _check_number && !_dot))
        throw(Convert::errorCharacter());
}

void    Convert::convertChar(std::string const &toString)
{
    _sym = toString[0];
    _num_i = static_cast<long>(_sym);
    _num_f = static_cast<float>(_sym);
    _num_d = static_cast<double>(_sym);
}

void    Convert::convertInt(std::string const &toString)
{
    _num_i = std::atof(toString.c_str());
    if (_num_i >= 0 && _num_i <= 255)
        _sym = static_cast<char>(_num_i);
    _num_f = static_cast<float>(_num_i);
    _num_d = static_cast<double>(_num_i);
}

void    Convert::convertFloat(std::string const &toString)
{
    _num_f = std::atof(toString.c_str());
    _num_i = static_cast<long>(_num_f);
    if (_num_i >= 0 && _num_i <= 255)
        _sym = static_cast<char>(_num_i);
    _num_d = static_cast<double>(_num_f);
}

void    Convert::convertDouble(std::string const &toString)
{
    _num_d = std::atof(toString.c_str());
    _num_i = static_cast<long>(_num_d);
    if (_num_i >= 0 && _num_i <= 255)
        _sym = static_cast<char>(_num_i);
    _num_f = static_cast<float>(_num_d);
}

void    Convert::convertation(std::string const &toString)
{
    if (toString.length() == 1 && _dot == 0 && _sym_f == 0 && !_check_number)
    {
        // std::cout << "is char" << std::endl;
        this->convertChar(toString);
    }
    else if (_dot == 0 && _sym_f == 0 && _check_number)
    {
        // std::cout << "is int" << std::endl;
        this->convertInt(toString);
    }
    else if ((_dot == 1 && _sym_f == 1) || toString == "-inff" || toString == "+inff" || toString == "nanf")
    {
        if (toString == "-inff" || toString == "+inff" || toString == "nanf")
            _check_nan = true;
        // std::cout << "is float" << std::endl;
        this->convertFloat(toString);
    }
    else if ((_dot == 1 && _sym_f == 0) || toString == "-inf" || toString == "+inf" || toString == "nan")
    {
        if (toString == "-inf" || toString == "+inf" || toString == "nan")
            _check_nan = true;
        // std::cout << "is double" << std::endl;
        this->convertDouble(toString);
    }
    else
        throw(Convert::errorCharacter());
}

void    Convert::printConvert() const
{
    std::cout << "\033[33m" << "char: " << "\033[0m";
    if (_sym >= 32 && _sym <= 126)
        std::cout << "\'" << _sym << "\'" << std::endl;
    else if (_num_i > INT_MAX || _num_i < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "\033[33m" << "int: " << "\033[0m";
    if (_num_i > INT_MAX || _num_i < INT_MIN)
        std::cout << "impossible" << std::endl;
    else
        std::cout << _num_i << std::endl;
    std::cout << "\033[33m" << "float: " << "\033[0m" << _num_f;
    if (!_num_after_dot && !_check_nan)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "\033[33m" << "double: " << "\033[0m" << _num_d;
    if (!_num_after_dot && !_check_nan)
        std::cout << ".0";
    std::cout << std::endl;
}