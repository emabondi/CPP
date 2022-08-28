#include<iostream>
#include<time.h>
#include<iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *t = localtime(&now);
	std::cout<< "[" << std::setfill('0') << 1900 + t->tm_year << std::setw(2) << 1 + t->tm_mon << std::setw(2) << t->tm_mday << "_" << std::setw(2) << t->tm_hour << std::setw(2) << t->tm_min << std::setw(2) << t->tm_sec << "] ";
	return ;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _totalAmount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (0);
}

int	Account::getTotalAmount(void)
{
	return (0);
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	return (0);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accounts:"<< _nbAccounts <<";total:" << _totalAmount << ";deposits:" << _totalNbWithdrawals << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << "amount:";
	_amount+=deposit;
	_nbDeposits++;
	std::cout<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";p_amount:" << _totalAmount;
	if (withdrawal > _totalAmount){
		std::cout<< ";withdrawal:refused" << std::endl;
		return false;
	}
	else{
		_totalAmount-=withdrawal;
		_nbWithdrawals++;
		std::cout<< ";withdrawal:" << withdrawal << ";amount:" << _totalAmount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _totalAmount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}
