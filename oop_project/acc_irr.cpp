#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class balanceType {
private:
    double balance;  // Placeholder attribute for the balance

public:
    // Constructor
    balanceType(double initialBalance = 0.0) {
        balance = initialBalance;
    }

    balanceType(const balanceType &) = default;
    balanceType(balanceType &&) = default;
    balanceType &operator=(const balanceType &) = default;
    balanceType &operator=(balanceType &&) = default;
    // Method to get the current balance
    double getBalance() const {
        return balance;
    }

    // Method to deposit funds
    void deposit(double amount) {
        balance += amount;
    }

    // Method to withdraw funds
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            // Handle insufficient balance error
            cout << "Insufficient balance." << endl;
        }
    }
};
class dateType {
private:
    int day;    // Placeholder attribute for the day
    int month;  // Placeholder attribute for the month
    int year;   // Placeholder attribute for the year

public:
    // Constructor
    dateType(int d = 1, int m = 1, int y = 2023) {
        // Validate the provided values or set default values
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            // If the provided values are invalid, set default values
            day = 1;
            month = 1;
            year = 2023;
            cout << "Invalid date provided. Set to default date (01/01/2023)." << endl;
        }
    }

    // Method to set the date
    void setDate(int d, int m, int y) {
        // Validate the provided values or keep the current date
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date provided. The date remains unchanged." << endl;
        }
    }

    // Method to get the date
    void getDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

private:
    // Helper method to validate the date
    bool isValidDate(int d, int m, int y) const {
        // Validate day
        if (d < 1 || d > 31) {
            return false;
        }

        // Validate month
        if (m < 1 || m > 12) {
            return false;
        }

        // Validate year
        if (y < 1900 || y > 2100) {
            return false;
        }

        return true;
    }
};









class accountType {
private:
    string acc_ID;
    string user_ID;
    string cust_ID;
    balanceType balance;
    dateType dateof_creation;

public:
    accountType(const string& accID, const string& userID, const string& custID,
                const balanceType& bal, const dateType& creationDate) {
        acc_ID = accID;
        user_ID = userID;
        cust_ID = custID;
        balance = bal;
        dateof_creation = creationDate;
    }
};



class balanceType {
    // Implementation of balanceType class goes here
};

class dateType {
private:
    int day;
    int month;
    int year;

public:
    dateType(int d = 1, int m = 1, int y = 2023) {
        setDate(d, m, y);
    }

    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            day = 1;
            month = 1;
            year = 2023;
            cout << "Invalid date provided. Set to default date (01/01/2023)." << endl;
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

    dateType& operator=(const dateType& other) {
        if (this != &other) {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }

    void set(const string& accID, const string& userID, const string& custID,
             const balanceType& bal, const dateType& creationDate) {
        acc_ID = accID;
        user_ID = userID;
        cust_ID = custID;
        balance = bal;
        dateof_creation = creationDate;
    }

    void get(string& accID, string& userID, string& custID,
             balanceType& bal, dateType& creationDate) const {
        accID = acc_ID;
        userID = user_ID;
        custID = cust_ID;
        bal = balance;
        creationDate = dateof_creation;
    }

    const void search(const string& query) {
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

    const void search(const dateType& query) {
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
        // Additional validation checks can be added here
        return true;
    }
};

class Current : public accountType {
private:
    int transaction_limit;

public:
    Current(const string& accID, const string& userID, const string& custID,
            const balanceType& bal, const dateType& creationDate, int limit) :
        accountType(accID, userID, custID, bal, creationDate) {
        transaction_limit = limit;
    }

    void set(const string& accID, const string& userID, const string& custID,
             const balanceType& bal, const dateType& creationDate, int limit) {
        accountType::set(accID, userID, custID, bal, creationDate);
        transaction_limit = limit;
    }

    void get(string& accID, string& userID, string& custID,
             balanceType& bal, dateType& creationDate, int& limit) const {
        accountType::get(accID, userID, custID, bal, creationDate);
        limit = transaction_limit;
    }

    void display() {
    accountType::display();
    cout << "Transaction Limit: " << transaction_limit << endl;
}

const void search(const string& query) {
    accountType::search(query);
    if (query == "transaction_limit") {
        cout << "Search result: Transaction Limit is " << transaction_limit << endl;
    }
    // Additional search functionality for Current class can be added here
    // For example:
    // if (query == "additional_field") {
    //     cout << "Search result: Additional Field is " << additional_field << endl;
    // }
}
};

class Fixed_deposit : public accountType {
private:
    float interest_rate;
    dateType dateof_termination;

public:
    Fixed_deposit(const string& accID, const string& userID, const string& custID,
                  const balanceType& bal, const dateType& creationDate,
                  float interestRate, const dateType& terminationDate) :
        accountType(accID, userID, custID, bal, creationDate) {
        interest_rate = interestRate;
        dateof_termination = terminationDate;
    }

    void set(const string& accID, const string& userID, const string& custID,
             const balanceType& bal, const dateType& creationDate,
             float interestRate, const dateType& terminationDate) {
        accountType::set(accID, userID, custID, bal, creationDate);
        interest_rate = interestRate;
        dateof_termination = terminationDate;
    }

    void get(string& accID, string& userID, string& custID,
             balanceType& bal, dateType& creationDate,
             float& interestRate, dateType& terminationDate) const {
        accountType::get(accID, userID, custID, bal, creationDate);
        interestRate = interest_rate;
        terminationDate = dateof_termination;
    }

    void display() {
        accountType::display();
        cout << "Interest Rate: " << interest_rate << "%" << endl;
        cout << "Termination Date: ";
        dateof_termination.display();
    }

    string search(string query) {
        string result = accountType::search(query);
        if (query == "interest_rate") {
            result += "Interest Rate: " + to_string(interest_rate) + "%\n";
        } else if (query == "termination_date") {
            result += "Termination Date: ";
            result += dateof_termination.to_string() + "\n";
        }
        // Additional search functionality for Fixed_deposit class can be added here
        // For example:
        // if (query == "additional_field") {
        //     result += "Additional Field: " + additional_field + "\n";
        // }
        return result;
    }
};
