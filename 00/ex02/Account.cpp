/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:29:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/13 18:28:27 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account( int	initial_deposit)
{
	for (int	i = 0; i < getTotalAmount() ; i++)
	{
		std::cout << _displayTimestamp() << ";";
		std::cout << "index:" << getNbAccounts() << ";";
		std::cout << "initial Amount:" << initial_deposit << ";";
		std::cout << "created" << std::endl;
	}
}

Account::~Account( void) { }

void	Account::_displayTimestamp( void )
{
	//std::time //strftime 
}

void	Account::displayAccountsInfos( void )
{
	for (int	i = 0; i < getTotalAmount() ; i++)
	{
		
	}
}

void	Account::makeDeposit( int deposit )
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	
}

int		Account::checkAmount( void ) const
{
	
}

void	Account::displayStatus( void ) const
{
	
}

//getters

int	Account::getNbAccounts( void ){ return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
