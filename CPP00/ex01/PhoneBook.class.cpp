/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkenned <fkenned@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:09:32 by fkenned           #+#    #+#             */
/*   Updated: 2021/11/24 20:18:39 by fkenned          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int PhoneBook::cinFail = 0;

void    PhoneBook::checkLenght(std::string str)
{
    int len;
    int i = 0;

    // while (str[len])
    //     len++;
    len = str.length();
    if (len > 10)
    {
        while (i < 9)
            std::cout << str[i++];
        std::cout << ".";
    }
    else
    {
        while (len++ < 10)
            std::cout << " ";
        std::cout << str;
    }
    std::cout << "|";
}

void    PhoneBook::printHaveContact()
{
    int i = 1;
    std::cout << "|";
    while (i++ < 10)
        std::cout << " ";
    std::cout << this->m_index;
    std::cout << "|";
    checkLenght(m_first_name);
    checkLenght(m_last_name);
    checkLenght(m_nickname);
    std::cout << std::endl;
}

void    PhoneBook::printContactInfo(void)
{
    std::cout << "\nFirst name: " << m_first_name << std::endl;
    std::cout << "Last name: " << m_last_name << std::endl;
    std::cout << "Nickname: " << m_nickname << std::endl;
    std::cout << "Phone number: " << m_phone_number << std::endl;
    std::cout << "Darkest secret: " << m_darkest_secret << "\n" << std::endl;
}

void    PhoneBook::dataFilling(std::string prompt, std::string &str)
{
    if (str[0] != '\0')
    {
        str[0] = '\0';
        while (str[0] == '\0' || str[0] == ' ' || str[0] == '\t')
        {
            std::cout << prompt;
            std::getline(std::cin, str, '\n');
            if (std::cin.fail())
            {
                std::cout << "EXIT";
                this->setCinFail(1);
                break ;
            }
        }
    }
    else
    {
        while (str[0] == '\0' || str[0] == ' ' || str[0] == '\t')
        {
            std::cout << prompt;
            std::getline(std::cin, str, '\n');
            if (std::cin.fail())
            {
                std::cout << "EXIT";;
                this->setCinFail(1);
                break ;
            }
        }
    }
}

void   PhoneBook::add(int numContact)
{
    m_index = numContact;
    std::cout << std::endl;
    if (this->getCinFail() == 0)
        dataFilling("Enter the first name: ", m_first_name);
    if (this->getCinFail() == 0)
        dataFilling("Enter the last name: ", m_last_name);
    if (this->getCinFail() == 0)
        dataFilling("Enter nickname: ", m_nickname);
    if (this->getCinFail() == 0)
        dataFilling("Enter phone number: ", m_phone_number);
    if (this->getCinFail() == 0)
        dataFilling("Enter darkest secret: ", m_darkest_secret);
    std::cout << std::endl;
}

void    PhoneBook::search()
{
    this->printContactInfo();
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::setCinFail(int num)
{
    this->cinFail = num;
}

int    PhoneBook::getCinFail(void)
{
    return (this->cinFail);
}