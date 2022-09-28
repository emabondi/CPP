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
	std::cout<< "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accounts:"<< _nbAccounts <<";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:";
	_amount+=deposit;
	_totalAmount+=deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount){
		std::cout<< ";withdrawal:refused" << std::endl;
		return false;
	}
	else{
		_amount-=withdrawal;
		_totalAmount-=withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout<< ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}
