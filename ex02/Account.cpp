#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
    _accountIndex(_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index" << _accountIndex << ";amount:" << ";created" << std::endl;
}

Account::Account()
{
    _displayTimestamp();
    std::cout << "index" << _accountIndex << ";amount:" << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals;

    if (withdrawal > _totalAmount)
    {
        std::cout << "refused: insufficient funds." << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount() const
{
    return _amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "amount:" << _amount << std::endl;
    std::cout << "total_amount:" << _totalAmount << std::endl;
    std::cout << "nb_deposits:" << _totalNbDeposits << std::endl;
    std::cout << "nb_withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(0);
    std::tm* t = std::localtime(&now);
    std::cout << "[" << std::setfill('0')
                << std::setw(4) << t->tm_year + 1900
                << std::setw(2) << t->tm_mon + 1
                << std::setw(2) << t->tm_mday << "_"
                << std::setw(2) << t->tm_hour
                << std::setw(2) << t->tm_min
                << std::setw(2) << t->tm_sec << "]";
}