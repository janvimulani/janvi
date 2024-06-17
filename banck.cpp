#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(int accountNumber, string accountHolderName, double balance)
    {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit Successful. New balance is " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal Successful. New balance is " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
};

class Bank
{
private:
    vector<Account> accounts;

public:
    void createAccount(int accountNumber, string accountHolderName, double initialBalance)
    {
        Account newAccount(accountNumber, accountHolderName, initialBalance);
        accounts.push_back(newAccount);
        cout << "Account created successfully" << endl;
    }

    void deposit(int accountNumber, double amount)
    {
        for (Account &account : accounts)
        {
            if (account.getAccountNumber() == accountNumber)
            {
                account.deposit(amount);
                return;
            }
        }
        cout << "Account not found" << endl;
    }

    void withdraw(int accountNumber, double amount)
    {
        for (Account &account : accounts)
        {
            if (account.getAccountNumber() == accountNumber)
            {
                account.withdraw(amount);
                return;
            }
        }
        cout << "Account not found" << endl;
    }

    void displayAccountInfo(int accountNumber)
    {
        for (Account &account : accounts)
        {
            if (account.getAccountNumber() == accountNumber)
            {
                cout << "Account Number: " << account.getAccountNumber() << endl;
                cout << "Account Holder Name: " << account.getAccountHolderName() << endl;
                cout << "Balance: " << account.getBalance() << endl;
                return;
            }
        }
        cout << "Account not found" << endl;
    }
};

int main()
{
    Bank bank;

    int choice;
    int accountNumber;
    string accountHolderName;
    double initialBalance;
    double amount;

    while (true)
    {
        cout << "Bank Management System" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Account Info" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter account holder name: ";
            cin >> accountHolderName;
            cout << "Enter initial balance: ";
            cin >> initialBalance;
            bank.createAccount(accountNumber, accountHolderName, initialBalance);
            break;
        case 2:
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            bank.deposit(accountNumber, amount);
            break;
        case 3:
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            bank.withdraw(accountNumber, amount);
            break;
        case 4:
            cout << "Enter account number: ";
            cin >> accountNumber;
            bank.displayAccountInfo(accountNumber);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}