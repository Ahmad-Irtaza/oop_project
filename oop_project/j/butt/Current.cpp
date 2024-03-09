
#include <iostream>
#include "Current.h"

Current::Current(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                 const dateType &creationDate, int limit) : accountType(accID, userID, custID, bal, creationDate),
                                                            transaction_limit(limit) {

}

void Current::set(const string &accID, const string &userID, const string &custID, const balanceType &bal,
                  const dateType &creationDate, int limit) {
    accountType::set(accID, userID, custID, bal, creationDate);
    transaction_limit = limit;

}

void Current::get(string &accID, string &userID, string &custID, balanceType &bal, dateType &creationDate,
                  int &limit) const {
    accountType::get(accID, userID, custID, bal, creationDate);
    limit = transaction_limit;

}

void Current::display() const {
    cout << "Account Type: Current" << endl;
    accountType::display();
    cout << "Transaction Limit: " << transaction_limit << endl;

}

const void Current::search(const string &query) {
    cout << "Searching in Current: " << query << endl;
    // Implement the search functionality specific to the Current class
    // You can add your own logic here to handle different queries
    if (query == "transaction limit") {
        cout << "Search result: Transaction limit is " << transaction_limit << endl;
    } else {
        // If the query doesn't match any supported search field, display an error message
        cout << "Search result: Invalid query" << endl;
    }
}
