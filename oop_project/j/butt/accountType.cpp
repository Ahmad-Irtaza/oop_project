#include <iostream>
#include "accountType.h"


accountType::accountType(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                         const dateType &creationDate) : acc_ID(accID), user_ID(userID), cust_ID(custID), balance(bal),
                                                         dateof_creation(creationDate) {}

void accountType::display() const {
    cout << "Account ID: " << acc_ID << endl;
    cout << "User ID: " << user_ID << endl;
    cout << "Customer ID: " << cust_ID << endl;
    balance.display();  // Display the balance using the balanceType's display method
    cout << "Date of Creation: ";
    dateof_creation.display();

}

void accountType::set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                      const dateType &creationDate) {
    acc_ID = accID;
    user_ID = userID;
    cust_ID = custID;
    balance = bal;
    dateof_creation = creationDate;

}

void accountType::get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate) const {
    accID = acc_ID;
    userID = user_ID;
    custID = cust_ID;
    bal = balance;
    creationDate = dateof_creation;

}

const void accountType::search(const dateType &query) {
    cout << "Searching in accountType with dateType parameter." << endl;
}
