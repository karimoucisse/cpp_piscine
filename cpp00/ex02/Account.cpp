#include "Account.hpp"
#include "iostream"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	_nbAccounts +=1;
	_totalAmount += initial_deposit;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;

	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created" << std::endl;
	return;
}

Account::Account( void ){return;}

Account::~Account( void ){
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";closed" << std::endl;
	return;
};
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
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

void	Account::displayAccountsInfos( void ){
	std::cout << "[19920104_091532] " << "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;
	if(withdrawal <= this->_amount)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
		return (1);
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" <<this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t timestamp;
	time(&timestamp);

}
