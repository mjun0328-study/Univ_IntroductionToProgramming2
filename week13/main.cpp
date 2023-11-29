#include <iostream>
#include <string>

using namespace std;

class NegativeDeposit
{
  public:
    string errorMsg() const {
      return "Error: Cannot deposit a negative amount.";
    }
};

class InsufficientFunds
{
  public:
    string errorMsg() const {
      return "Error: Insufficient funds for withdrawal.";
    }
};

class Account
{
  private:
    double balance;
  public:
    Account()
    {
      balance = 0;
    }
    Account(double initialDeposit)
    {
      balance = initialDeposit;
    }
    double getBalance()
    {
      return balance;
    }
    // returns new balance or -1 if error
    double deposit(double amount)
    {
      if (amount > 0)
        balance += amount;
      else
        throw NegativeDeposit();        // Code indicating error
      return balance;
    }
    // returns new balance or -1 if invalid amount
    double withdraw(double amount)
    {
      if ((amount > balance) || (amount < 0))
        throw InsufficientFunds();
      else
        balance -= amount;
      return balance;
    }
};

int main() {
  try {
    Account account(10);
    account.deposit(-100);
  }catch(const NegativeDeposit& e) {
    cout << e.errorMsg() << endl;
  }

  try {
    Account account(150);
    account.withdraw(100);
    account.withdraw(100);
  }catch(const InsufficientFunds& e) {
    cout << e.errorMsg() << endl;
  }
}