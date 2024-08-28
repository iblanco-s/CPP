/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:03:56 by iblanco-          #+#    #+#             */
/*   Updated: 2024/08/22 20:09:26 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);
    
    std::cout << '[';
    std::cout << std::setfill('0')
              << localTime->tm_year + 1900
              << std::setw(2) << localTime->tm_mon + 1
              << std::setw(2) << localTime->tm_mday
              << '_'
              << std::setw(2) << localTime->tm_hour
              << std::setw(2) << localTime->tm_min
              << std::setw(2) << localTime->tm_sec;
    std::cout << "] ";
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
              << ";deposit:" << deposit << ";amount:" << _amount 
              << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount = _amount;
    bool refused = (_amount < withdrawal);

    if (!refused) {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
    }

    _displayTimestamp();
    if (refused) {
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
                  << ";withdrawal:refused" << std::endl;
    } else {
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount 
                  << ";withdrawal:" << withdrawal << ";amount:" << _amount 
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }

	return (refused);
}

//Constructor
Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

//Destructor
Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
