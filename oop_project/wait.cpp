#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class balanceType {
private:
  double balance;

public:
  balanceType(double initialBalance = 0.0) // balance(initialBalance) {}
  {
    balance = initialBalance;
  }

  void setBalance(double newBalance) { balance = newBalance; }

  double getBalance() const { return balance; }

  void display() const { cout << "Balance: $" << balance << endl; }
};

class dateType {
private:
  int day;
  int month;
  int year;

public:
  dateType(int d = 1, int m = 1, int y = 2023) { setDate(d, m, y); }

  void setDate(int d, int m, int y) {
    if (isValidDate(d, m, y)) {
      day = d;
      month = m;
      year = y;
    } else {
      day = 0;
      month = 0;
      year = 0000;
      cout << "Invalid date provided. Set to default date (01/01/2023)."
           << endl;
    }
  }

  void enterDate() {
    int d, m, y;
    cout << "Enter the day: ";
    cin >> d;
    cout << "Enter the month: ";
    cin >> m;
    cout << "Enter the year: ";
    cin >> y;
    setDate(d, m, y);
  }

  void getDate() const {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
  }

  void display() const {
    string monthName = getMonthName(month);
    cout << "Date: " << day << " " << monthName << " " << year << endl;
  }

  dateType &operator=(const dateType &other) {
    if (this != &other) {
      day = other.day;
      month = other.month;
      year = other.year;
    }
    return *this;
  }

  const void search(const string &query) {
    if (query == "day") {
      cout << "Search result: Day is " << day << endl;
    } else if (query == "month") {
      cout << "Search result: Month is " << month << endl;
    } else if (query == "year") {
      cout << "Search result: Year is " << year << endl;
    } else {
      cout << "Search result: Invalid query" << endl;
    }
  }

  const void search(const dateType &query) {
    if (day == query.day && month == query.month && year == query.year) {
      cout << "Search result: Date matches." << endl;
    } else {
      cout << "Search result: Date does not match." << endl;
    }
  }

private:
  bool isValidDate(int d, int m, int y) const {
    if (d < 1 || d > 31) {
      return false;
    }
    if (m < 1 || m > 12) {
      return false;
    }
    if (y < 1900 || y > 2100) {
      return false;
    }
    return true;
  }

  string getMonthName(int month) const {
    switch (month) {
    case 1:
      return "January";
    case 2:
      return "February";
    case 3:
      return "March";
    case 4:
      return "April";
    case 5:
      return "May";
    case 6:
      return "June";
    case 7:
      return "July";
    case 8:
      return "August";
    case 9:
      return "September";
    case 10:
      return "October";
    case 11:
      return "November";
    case 12:
      return "December";
    default:
      return "Invalid";
    }
  }
};

class accountType {
protected:
  string acc_ID;
  string user_ID;
  string cust_ID;
  balanceType balance;
  dateType dateof_creation;

public:
  accountType(const string &accID, const string &userID, const string &custID,
              const balanceType &bal, const dateType &creationDate)
      : acc_ID(accID), user_ID(userID), cust_ID(custID), balance(bal),
        dateof_creation(creationDate) {}

  void display() const {
    cout << "Account ID: " << acc_ID << endl;
    cout << "User ID: " << user_ID << endl;
    cout << "Customer ID: " << cust_ID << endl;
    balance.display(); // Display the balance using the balanceType's display
                       // method
    cout << "Date of Creation: ";
    dateof_creation.display();
  }

  void set(const string &accID, const string &userID, const string &custID,
           const balanceType &bal, const dateType &creationDate) {
    acc_ID = accID;
    user_ID = userID;
    cust_ID = custID;
    balance = bal;
    dateof_creation = creationDate;
  }

  void get(string &accID, string &userID, string &custID, balanceType &bal,
           dateType &creationDate) const {
    accID = acc_ID;
    userID = user_ID;
    custID = cust_ID;
    bal = balance;
    creationDate = dateof_creation;
  }

  const void search(const string &query) {
    cout << "Searching in accountType: " << query << endl;
    // Implementation of search() method goes here
  }

  const void search(const dateType &query) {
    cout << "Searching in accountType with dateType parameter." << endl;
    // Implementation of search() method with dateType parameter goes here
  }
};

class Current : public accountType {
private:
  int transaction_limit;

public:
  Current(const string &accID, const string &userID, const string &custID,
          const balanceType &bal, const dateType &creationDate, int limit)
      : accountType(accID, userID, custID, bal, creationDate),
        transaction_limit(limit) {}

  void set(const string &accID, const string &userID, const string &custID,
           const balanceType &bal, const dateType &creationDate, int limit) {
    accountType::set(accID, userID, custID, bal, creationDate);
    transaction_limit = limit;
  }

  void get(string &accID, string &userID, string &custID, balanceType &bal,
           dateType &creationDate, int &limit) const {
    accountType::get(accID, userID, custID, bal, creationDate);
    limit = transaction_limit;
  }

  void display() const {
    cout << "Account Type: Current" << endl;
    accountType::display();
    cout << "Transaction Limit: " << transaction_limit << endl;
  }

  const void search(const string &query) {
    cout << "Searching in Current: " << query << endl;
    // Implement the search functionality specific to the Current class
    // You can add your own logic here to handle different queries
    if (query == "transaction limit") {
      cout << "Search result: Transaction limit is " << transaction_limit
           << endl;
    } else {
      // If the query doesn't match any supported search field, display an error
      // message
      cout << "Search result: Invalid query" << endl;
    }
  }
};

class FixedDeposit : public accountType {
private:
  float interest_rate;
  dateType dateof_termination;

public:
  FixedDeposit(const string &accID, const string &userID, const string &custID,
               const balanceType &bal, const dateType &creationDate, float rate,
               const dateType &terminationDate)
      : accountType(accID, userID, custID, bal, creationDate),
        interest_rate(rate), dateof_termination(terminationDate) {}

  void set(const string &accID, const string &userID, const string &custID,
           const balanceType &bal, const dateType &creationDate, float rate,
           const dateType &terminationDate) {
    accountType::set(accID, userID, custID, bal, creationDate);
    interest_rate = rate;
    dateof_termination = terminationDate;
  }

  void get(string &accID, string &userID, string &custID, balanceType &bal,
           dateType &creationDate, float &rate,
           dateType &terminationDate) const {
    accountType::get(accID, userID, custID, bal, creationDate);
    rate = interest_rate;
    terminationDate = dateof_termination;
  }

  void display() const {
    cout << "Account Type: Fixed Deposit" << endl;
    accountType::display();
    cout << "Interest Rate: " << interest_rate << "%" << endl;
    cout << "Termination Date: ";
    dateof_termination.display();
  }

  const void search(const string &query) {
    cout << "Searching in Fixed Deposit: " << query << endl;
    // Implement the search functionality specific to the FixedDeposit class
    // You can add your own logic here to handle different queries
    if (query == "interest rate") {
      cout << "Search result: Interest rate is " << interest_rate << "%"
           << endl;
    } else if (query == "termination date") {
      cout << "Search result: Termination date is ";
      dateof_termination.display();
    } else {
      // If the query doesn't match any supported search field, display an error
      // message
      cout << "Search result: Invalid query" << endl;
    }
  }
};
