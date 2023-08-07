/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:47:54 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/07 20:20:40 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount<< ";";
	std::cout << "created" << std::endl;
}

Account::Account(void) :
	_accountIndex(_nbAccounts),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	auto now = std::chrono::system_clock::now();
	std::time_t timeNow = std::chrono::system_clock::to_time_t(now);
	struct std::tm timeInfo;
	localtime_r(&timeNow, &timeInfo);
	std::cout << "[" << std::put_time(&timeInfo, "%Y%m%d_%H%M%S") << "] ";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index: " << _accountIndex << "; ";
	std::cout << "amount: " << _amount << "; ";
	std::cout << "deposits: " << _nbDeposits << "; ";
	std::cout << "withdrawals: " << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index: " << _accountIndex << "; ";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	_totalNbDeposits++;
	_totalAmount += deposit;
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index: " << _accountIndex << "; ";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	} 
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;	
	this->_nbWithdrawals++;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}