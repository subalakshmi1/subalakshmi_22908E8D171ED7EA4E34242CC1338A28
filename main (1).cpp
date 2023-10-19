#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& number, const std::string& holderName, double balance)
        : accountNumber(number), accountHolderName(holderName), accountBalance(balance) {
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount must be greater than 0." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("12345", "John Doe", 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display the account balance
    myAccount.displayBalance();

    return 0;
}
