#include "Account.hpp"
#include <ctime>
#include <iostream>


void	Account::_displayTimestamp( void )
{
	std::cout << "[" << std::time(0) << "] ";
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

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() << ";total:" << getTotalAmount() << ";deposits" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals;
}

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;