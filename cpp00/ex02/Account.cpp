#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}

Account::Account( void )
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	std::cout << 1 << std::endl;
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{	
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";" ;
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}// this got used


//[19920104_091532] index:1;amount:54;created
Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" <<std::endl;
}// this got used

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}// this got used

//[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:" ;
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return(1);
	}
	std::cout << withdrawal << ";" ;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << std::endl;
	return (0);
}// this got used

int		Account::checkAmount( void ) const
{
	Account::_displayTimestamp();
	std::cout << "checkAmount" << std::endl;
	return (0);
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";" ;
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}
