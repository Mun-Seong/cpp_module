/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museo <museo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:20:28 by museo             #+#    #+#             */
/*   Updated: 2022/10/25 14:34:26 by museo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
    : _accountIndex(_nbAccounts++),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex 
		<<";amount:" << _amount << ";created" << std::endl;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<<";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<<";p_amount:" << _amount
		<< ";deposit:" << deposit
		<<";amount:" << _amount + deposit
		<< ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	Account::_totalAmount += deposit;
	++Account::_totalNbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<<";p_amount:" << _amount;
	if (_amount - withdrawal < 0) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	++Account::_totalNbWithdrawals;
	return true;
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
    	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t t = time(NULL);
	if (t == -1)
		return ;
	std::tm tm;
	if (localtime_r(&t, &tm) == NULL)
		return ;

	std::cout << "[" << tm.tm_year + 1900
		<< std::setfill('0') << std::setw(2) << tm.tm_mon + 1
		<< std::setfill('0') << std::setw(2) << tm.tm_mday << "_"
		<< std::setfill('0') << std::setw(2) << tm.tm_hour
		<< std::setfill('0') << std::setw(2) << tm.tm_min
		<< std::setfill('0') << std::setw(2) << tm.tm_sec << "]";
}

Account::Account(void)
{
	return ;
}