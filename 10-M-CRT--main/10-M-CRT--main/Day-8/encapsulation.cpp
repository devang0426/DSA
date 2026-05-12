#include <iostream>

using namespace std;
class ATM
{
private:
    int balance;

public:
    // Enacpsulation
    void setBalance(int balance)
    {
        this->balance = balance;
    }
    // Withdraw Method of Atm
    void Withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }
    // Show Balance Method of Atm
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    int n;
    cin >> n;
    ATM a;
    a.setBalance(n);
    cout << "Balance is:" << a.getBalance() << endl;
    a.Withdraw(500);
    cout << "Balance is:" << a.getBalance() << endl;

    return 0;
}