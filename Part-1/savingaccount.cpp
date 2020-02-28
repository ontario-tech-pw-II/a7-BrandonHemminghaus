#include "savingaccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	initialBalance = getBalance();
	rate = 0.12;
	interestRate = rate;
}

double SavingsAccount::calculateInterest() {
	return getBalance()*interestRate;
} 

void SavingsAccount::display(ostream & os) const
{
	os << "Saving:" << endl; 
	os << "Balance: " << getBalance() << endl;
	os << "Interest rate: " << calculateInterest() << endl;
}