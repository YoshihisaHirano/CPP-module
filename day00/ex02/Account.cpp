#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" <<
	"amount:" << this->_amount << ";" << "created" << std::endl;
	return;
}

Account::~Account()
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" <<
	"amount:" << this->_amount << ";" << "closed" << std::endl;
	return;
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) 
{
	std::time_t	now = std::time(0);
	tm *ltime = std::localtime(&now);
	std::cout << "[" << 1900 + ltime->tm_year << std::setfill('0') << std::setw(2) << ltime->tm_mon + 1
	<< std::setfill('0') << std::setw(2) << ltime->tm_mday << "_"
	<< std::setfill('0') << std::setw(2) << ltime->tm_hour 
	<< std::setfill('0') << std::setw(2) << ltime->tm_min 
	<< std::setfill('0') << std::setw(2) << ltime->tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	this->_amount += deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount - deposit << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << this->_amount << ";" <<
	"nb_deposits:" << this->_nbDeposits <<  std::endl;
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal >= 0)
	{
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;

		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount + withdrawal << ";"
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";" <<
		"nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount<< ";" <<
	"withdrawal:refused" << std::endl;
	return false;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;