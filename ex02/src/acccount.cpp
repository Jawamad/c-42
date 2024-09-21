#include "Account.hpp"
#include <ctime>
#include <iostream>

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::cout << "[" << std::ctime(&now) << "] ";
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
	_amount+= deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	displayStatus();
}
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
}

Account::~Account( void )
{

}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() << ";total:" << getTotalAmount() << ";deposits" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals;
}
