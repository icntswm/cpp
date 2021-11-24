/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkenned <fkenned@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:09:28 by fkenned           #+#    #+#             */
/*   Updated: 2021/11/24 20:20:17 by fkenned          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void    checkCmd(PhoneBook book[], std::string cmd, int &numContact)
{
    if (cmd == "ADD")
    {
        if (numContact > 7)
            book[numContact - 1].add(numContact - 1);
        else
        {
            book[numContact].add(numContact);
            numContact++;
        }
    }
    else if (cmd == "SEARCH")
    {
        int i = 0;
        if (numContact > 0)
        {
            std::cout << "\n|     index|first name| last name|  nickname|" << std::endl;
            while (i < numContact)
                book[i++].printHaveContact();
            std::cout << "\nWhat contact do you need?(index): ";
            int num;
            std::cin >> num;
            std::cin.ignore(32767, '\n');
            if (std::cin.fail())
            {
                if (num != 0)
                {
                    book[0].setCinFail(1);
                    std::cout << "EXIT" << std::endl;
                }
                else
                {
                    std::cout << "Error: input error "<< std::endl;
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                }
            }
            else
            {
                if (num >= 0 && num < numContact)
                    book[num].search();
                else
                    std::cout << "Error: invalid contact index" << std::endl;
            }
        }
        else
            std::cout << "Error: there are no contacts yet" << std::endl; 
    }
}

int main()
{
    PhoneBook PhoneBook[8];
    std::string cmd;
    int numContact = 0;
    
    while (1)
    {
        std::cout << "Enter the command(ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
        {
            std::cout << "EXIT" << std::endl;
            break ;
        }
        if (cmd == "EXIT")
            break ;
        else
        {
            checkCmd(PhoneBook, cmd, numContact);
            if (PhoneBook[0].getCinFail() == 1)
                break ;
        }
    }
    return (0);
}