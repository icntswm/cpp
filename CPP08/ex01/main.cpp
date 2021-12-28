#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // std::cout << "------------------------" << std::endl;

    // try
    // {
    //     Span one(30);
    //     one.randomNumbers(100);
    //     Span two(one);
    //     Span three;
    //     three = two;
    //     std::cout << "One: " << one << std::endl;
    //     std::cout << "Two: " << two << std::endl;
    //     std::cout << "Three: " << three << std::endl;
    //     one.printArray();

    //     Span four(40);
    //     four.setArrayIter(one.getArray().begin(), one.getArray().end());
    //     four.randomNumbers(150);
    //     three = four;
    //     std::cout << "Four: " << four << std::endl;
    //     std::cout << "Three: " << three << std::endl;
    //     four.printArray();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // std::cout << "------------------------" << std::endl;

    // try
    // {
    //     Span sp(1000);
    //     sp.addNumber(1);
    //     sp.addNumber(-123);
    //     sp.randomNumbers(1000);
    //     // sp.printArray();
    //     std::cout << sp << std::endl;

    //     Span sp1(10000);
    //     sp1.addNumber(-100000);
    //     sp1.addNumber(1234567);
    //     sp1.randomNumbers(10000);
    //     std::cout << sp1 << std::endl;

    //     Span sp2(100000);
    //     sp2.addNumber(87654321);
    //     sp2.addNumber(-87654321);
    //     sp2.randomNumbers(200000);
    //     std::cout << sp2 << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // std::cout << "------------------------" << std::endl;


    // try
    // {
    //     // Span sp(-2);

    //     // Span sp(5);
    //     // sp.randomNumbers(20);
    //     // sp.addNumber(1);

    //     // Span sp(5);
    //     // sp.addNumber(2);
    //     // std::cout << sp.shortestSpan() << std::endl;
    //     // std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    return(0);
}