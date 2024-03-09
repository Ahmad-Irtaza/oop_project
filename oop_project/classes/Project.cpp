#include<iostream>
using namespace std;

class userType
{
private:
string emp_ID;
string password;
public:
userType(string,string);
void set(string,string);
void get(string&,string&)const;
bool verify_password(string);
void createLoan();
void ctreateAccount();
void deleteAccount();
void createEmployee();
void deleteEmployee();
void addCustomer();
void deleteCustomer();
};

class addressType
{
private:
string Street;
string City;
string Area;
int Postal_code;
string Country;
public:
addressType(string,string,string,int,string);
void set(string,string,string,int,string);
void get(string&,string&,int&,string&);
};

class Loan
{
private:
string emp_ID;
string user-ID;
balanceType amount;
string cust_ID;
public:
Loan(string,string,balanceType,string);
void set(string,string,balanceType,string);
void get(string&,string&,balanceType&,string&);
void display();
};
