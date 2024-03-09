#include <iostream>
#include <string>

using namespace std;

class userType 
{
    string emp_ID;
    string password;

public:
    userType(string id, string pw) 
    {
        emp_ID = id;
        password = pw;
    }

    void set(string id, string pw) 
    {
        emp_ID = id;
        password = pw;
    }

    void get(string& id, string& pw) const 
    {
        id = emp_ID;
        pw = password;
    }

    bool verify_password(string pw) 
    {
        return (pw == password);
    }

    void createLoan() 
    {
        cout << "Creating a new loan account." << endl;

    }

    void createAccount() 
    {
        cout << "Creating a new bank account." << endl;

    }

    void deleteAccount() 
    {
        cout << "Deleting an existing bank account." << endl;

    }

    void createEmployee() 
    {
        cout << "Creating a new employee account." << endl;

    }

    void deleteEmployee() 
    {
        cout << "Deleting an existing employee account." << endl;

    }


    void addCustomer() 
    {
        cout << "Adding a new customer account." << endl;

    }


    void deleteCustomer() 
    {
        cout << "Deleting an existing customer account." << endl;

    }
};
