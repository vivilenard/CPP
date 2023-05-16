/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:29:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/16 16:36:39 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int	initial_deposit)
{
	static int index = 0;

	this->_accountIndex = index;
	this->_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	index++;
	this->_nbAccounts = index;
	this->_totalAmount += _amount;
}

Account::~Account( void) 
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	if (_accountIndex == 0)
		this->_totalAmount = 0;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_totalNbDeposits++;
	this->_totalAmount += _amount;
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_accountIndex == 0)
		this->_totalAmount = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount -= withdrawal;
	if (!checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		_amount += withdrawal;
		this->_totalAmount += _amount;
		return 0;
	}
	this->_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	_totalNbWithdrawals++;
	this->_totalAmount += _amount;
	return 0;
}

int		Account::checkAmount( void ) const
{
	if (this->_amount < 0)
		return 0;
	return 1;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	char timestring[80] = "yyyy-mm-ddThh:mm:ssZ";
	std::time_t time = std::time(0);
	std::strftime(timestring, sizeof(timestring), "[%Y%m%d_%H%M%S] ", std::localtime(&time));
	std::cout << timestring;
}

int	Account::getNbAccounts( void ){ return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
