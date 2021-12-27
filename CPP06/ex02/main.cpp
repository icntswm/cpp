#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    std::cout << "\033[33m";
    srand(time(0));
    if (rand() % 2)
    {
        if (rand() % 2)
        {
            std::cout << "class A created\n";
            std::cout << "\033[0m";
            return(new A);
        }
        else
        {
            std::cout << "class B created\n";
            std::cout << "\033[0m";
            return(new B);
        }
    }
    std::cout << "class C created\n";
    std::cout << "\033[0m";
    return(new C);
}

void identify(Base *p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A *>(p);
    b = dynamic_cast<B *>(p);
    c = dynamic_cast<C *>(p);
    std::cout << "\033[33m";
    if (a)
        std::cout << "this is class A" << std::endl;
    else if (b)
        std::cout << "this is class B" << std::endl;
    else if (c)
        std::cout << "this is class C" << std::endl;
    std::cout << "\033[0m";
}

void identify(Base &p)
{
    std::cout << "\033[33m";
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "this is class A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            std::cout << "this is class B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            C &c = dynamic_cast<C &>(p);
            std::cout << "this is class C" << std::endl;
            (void)c;
        }
    }
    std::cout << "\033[0m";
}

int main()
{
    Base *base;

    base = generate();
    std::cout << "check " << "\033[34m" << "\"void identify(Base " << "\033[31m" << "*" <<
    "\033[34m" << "p)\"" << "\033[0m" << std::endl;
    identify(base);
    std::cout << "check " << "\033[34m" << "\"void identify(Base " << "\033[31m" << "&" <<
    "\033[34m" << "p)\"" << "\033[0m" << std::endl;
    identify(*base);
    if (base)
        delete base;
    return (0);
}