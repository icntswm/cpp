/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkenned <fkenned@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:32:09 by fkenned           #+#    #+#             */
/*   Updated: 2021/11/24 20:21:00 by fkenned          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
    this->_amount=initial_deposit;
    this->_accountIndex = _nbAccounts;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
    ++_nbAccounts;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits = 1;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_nbAccounts << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    _totalAmount += deposit;
    ++_totalNbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_nbAccounts << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount - withdrawal > 0)
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals = 1;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawal:" << this->_nbWithdrawals << std::endl;
        _totalAmount -= withdrawal;
        ++_totalNbWithdrawals;
    }
    else
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t tt;
    time( &tt );
    tm tm = *localtime( &tt );

    std::cout << "[" << tm.tm_year + 1900 << tm.tm_mon + 1 << tm.tm_mday << "_" <<
        tm.tm_hour << tm.tm_min << tm.tm_sec << "] "; 
}

Account::Account(void)
{
}
