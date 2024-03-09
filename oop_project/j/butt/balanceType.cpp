
#include <iostream>
#include "balanceType.h"

using namespace std;

balanceType::balanceType(double initialBalance) {}

double balanceType::getBalance() const {
    return balance;
}

void balanceType::setBalance(double balance) {
    balanceType::balance = balance;
}

void balanceType::display() const {
    cout << "Balance: $" << balance << endl;

}
