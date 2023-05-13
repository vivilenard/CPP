/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:29:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/13 19:04:59 by vlenard          ###   ########.fr       */
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
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";";
	std::cout << "initial Amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	
}

Account::~Account( void) { }

void	Account::_displayTimestamp( void )
{
	std::string timestring = "yyyy-mm-ddThh:mm:ssZ";
	std::time_t time = std::time(0);
	std::cout << timestring << std::endl;
	
	//strftime 
}

void	Account::displayAccountsInfos( void )
{
	// for (int	i = 0; i < getTotalAmount() ; i++)
	// {
		
	// }
}

void	Account::makeDeposit( int deposit )
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	return 0;
}

int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	
}

//getters

int	Account::getNbAccounts( void ){ return _nbAccounts; }
// int	Account::getTotalAmount( void ) { return _totalAmount; }
// int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
// int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
