
#include <iostream>
#include "FixedDeposit.h"

FixedDeposit::FixedDeposit(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                           const dateType &creationDate, float rate, const dateType &terminationDate) : accountType(
        accID, userID, custID, bal, creationDate), interest_rate(rate), dateof_termination(terminationDate) {}

void FixedDeposit::set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                       const dateType &creationDate, float rate, const dateType &terminationDate) {

    accountType::set(accID, userID, custID, bal, creationDate);
    interest_rate = rate;
    dateof_termination = terminationDate;
}

void
FixedDeposit::get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate, float &rate,
                  dateType &terminationDate) const {
    accountType::get(accID, userID, custID, bal, creationDate);
    rate = interest_rate;
    terminationDate = dateof_termination;


}

void FixedDeposit::display() const {
    cout << "Account Type: Fixed Deposit" << endl;
    accountType::display();
    cout << "Interest Rate: " << interest_rate << "%" << endl;
    cout << "Termination Date: ";
    dateof_termination.display();
}

const void FixedDeposit::search(const string &query) {
    cout << "Searching in Fixed Deposit: " << query << endl;
    // Implement the search functionality specific to the FixedDeposit class
    // You can add your own logic here to handle different queries
    if (query == "interest rate") {
        cout << "Search result: Interest rate is " << interest_rate << "%" << endl;
    } else if (query == "termination date") {
        cout << "Search result: Termination date is ";
        dateof_termination.display();
    } else {
        // If the query doesn't match any supported search field, display an error message
        cout << "Search result: Invalid query" << endl;
    }
}

