#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip> 

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::tm *localTime = std::localtime(&now);
	std::cout	<< "[" 
				<< (localTime->tm_year +1900)
				<< std::setw(2) << std::setfill('0') << (localTime->tm_mon +1)
				<< std::setw(2) << std::setfill('0') << (localTime->tm_mday)
				<< "_"
				<< std::setw(2) << std::setfill('0') << (localTime->tm_hour)
				<< std::setw(2) << std::setfill('0') << (localTime->tm_min)
				<< std::setw(2) << std::setfill('0') << (localTime->tm_sec)
				<< "] ";
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}
int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex << ";p_amount:" << _amount;
	_amount+= deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";deposit:"<< deposit <<";amount:"<< _amount <<";nb_deposits:"<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool exec = false;
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex << ";p_amount:" << _amount;
	if (withdrawal <= _amount)
	{
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_amount -= withdrawal;
		exec = false;
		std::cout << ";withdrawal:"<< withdrawal <<";amount:"<< _amount <<";nb_withdrawals:"<< _nbWithdrawals << std::endl;
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return exec;
}

int	Account::checkAmount( void ) const
{
	 return _amount;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:"<<_accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< _nbAccounts<< ";total:" << _totalAmount << ";deposits" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
