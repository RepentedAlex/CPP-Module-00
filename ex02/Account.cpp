#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include "Account.hpp"

#include <strings.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{}

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;

	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ';' <<
	"amount:" << this->_amount << ';' <<
	"created" << std::endl;
}

Account::~Account()
{
	std::cout <<
	"index:" << this->_accountIndex << ';' <<
	"amount:" << this->_amount << ';' <<
	"closed" << std::endl;
}

int		Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ';' <<
	"amount:" << this->_amount << ';' <<
	"deposits:" << this->_nbDeposits << ';' <<
	"withdrawals:" << this->_nbWithdrawals <<
	std::endl;
}

int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout <<
	"accounts:" << getNbAccounts() << ';' <<
	"total:" << getTotalAmount() << ';' <<
	"deposits:" << getNbDeposits() << ';' <<
	"withdrawals:" << getNbWithdrawals() <<
	std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
		return false;
	this->_amount -= withdrawal;
	return true;
}

void	Account::_displayTimestamp()
{
	std::time_t	now = std::time(NULL);
	std::tm		now_tm = *std::localtime(&now);

	std::cout << '[' << now_tm.tm_year <<
	std::setfill('0') << std::setw(2) << now_tm.tm_mon <<
	std::setfill('0') << std::setw(2) << now_tm.tm_mday << '_' <<
	std::setfill('0') << std::setw(2) << now_tm.tm_hour <<
	std::setfill('0') << std::setw(2) << now_tm.tm_min <<
	std::setfill('0') << std::setw(2) << now_tm.tm_sec << ']';
}
