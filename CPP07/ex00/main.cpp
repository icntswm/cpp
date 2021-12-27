#include "whatever.hpp"

int main( void )
{

    std::cout << "\033[34m" << "-------------INT-------------" << "\033[0m" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "\033[32m" << "initial values: " << "\033[0m" << "a = " << a << ", b = " << b << std::endl; 
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::cout << "\033[34m" << "-------------STRING-------------" << "\033[0m" << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "\033[32m" << "initial values: " << "\033[0m" << "c = " << c << ", d = " << d << std::endl; 
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    std::cout << "\033[34m" << "-------------CHAR-------------" << "\033[0m" << std::endl;

    char e = 'a';
    char f = 'b';
    std::cout << "\033[32m" << "initial values: " << "\033[0m" << "e = " << e << ", f = " << f << std::endl; 
    ::swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "max(e, f) = " << ::max(e, f) << std::endl;

    std::cout << "\033[34m" << "-------------FLOAT-------------" << "\033[0m" << std::endl;

    float g = 0.7f;
    float h = 1.6f;
    std::cout << "\033[32m" << "initial values: " << "\033[0m" << "g = " << g << ", h = " << h << std::endl; 
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min(g, h) = " << ::min(g, h) << std::endl;
    std::cout << "max(g, h) = " << ::max(g, h) << std::endl;

    std::cout << "\033[34m" << "-------------DOUBLE-------------" << "\033[0m" << std::endl;
    
    double i = 5.7;
    double j = 11.6;
    std::cout << "\033[32m" << "initial values: " << "\033[0m" << "i = " << i << ", j = " << j << std::endl; 
    ::swap(i, j);
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "min(i, j) = " << ::min(i, j) << std::endl;
    std::cout << "max(i, j) = " << ::max(i, j) << std::endl;

    return (0);
}