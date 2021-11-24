/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkenned <fkenned@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:09:37 by fkenned           #+#    #+#             */
/*   Updated: 2021/11/24 20:11:40 by fkenned          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include <cstring>

class PhoneBook
{
private:
    int m_index;
    static int  cinFail;
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phone_number;
    std::string m_darkest_secret;
public:
    PhoneBook();
    ~PhoneBook();
    void    add(int numContact);
    void    search(void);
    void    printHaveContact(void);
    void    printContactInfo(void);
    void    dataFilling(std::string prompt, std::string &str);
    void    checkLenght(std::string str);
    void    setCinFail(int num);
    int     getCinFail(void);
};

#endif