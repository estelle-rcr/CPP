/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erecuero <erecuero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:48:59 by erecuero          #+#    #+#             */
/*   Updated: 2022/02/10 18:30:24 by erecuero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int 	Account::_nbAccounts(0);
int 	Account::_totalAmount(0);
int 	Account::_totalNbDeposits(0);
int 	Account::_totalNbWithdrawals(0);

Account::Account( int initial_deposit ) {
	
	Account::_nbAccounts += 1;
	this->_accountIndex = Account::getNbAccounts() - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";created" << std::endl;
	return;
}

Account::~Account( void ) {
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";closed" << std::endl;
	return;
}


int		Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int		Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl; 
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << Account::checkAmount();
	if (withdrawal > this->_amount) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;	
	}
	else {
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";amount:" << Account::checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbDeposits << std::endl; 
		return true;
	}
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {

	std::time_t result = std::time(NULL);
	tm* timePtr = localtime(&result);
	std::cout << "["
		<< timePtr->tm_year + 1900
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mon + 1
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mday
		<< "_"
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_hour
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_min
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_sec
		<< "] ";
}