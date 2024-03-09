#include <iostream>
#include <string>

using namespace std;

class userType {
private:
  string emp_ID;

  string password;

public:
  userType(string, string);

      void set(string, string);

  void get(string &, string &) const;

  bool verify_password(string);

  void createLoan();

  void createAccount();

  void deleteAccount();

  void createEmployee();

  void deleteEmployee();

  void addCustomer();

  void deleteCustomer();
};

class infoType {

protected:
  string Name;

  addressType Address;

  string EmailAddress;

  int Phone num;

  int Cnic;

  string ID;

public:
  info Type(string.address Type, string int, int)

      void display();

  void setinfo(const string &, const addressType &, const string &, const int &,
               const int &)

      getinfo(string &address Type &string &, int &int &)

          void display();

  string search(string);
};

class addressType {
private:
  string Street;

  string City;

  string Area;

  int Postal Code;

  string Country;

  public;

  address Type(string string string, int, string)

      void set(string string, string, int string);

  void get(string &string &int &, string &);
};

class EmployeeInfo 
{

private:
  string designation;

  float salary;

public:
  employeeType(string, string, address Type, string, int, int, string, float)

      void set_emp(string, string, address Type, string, int, int, string,
                   float);

  void get_emp(string &, string &address Type &, string &, int &, int &,
               float &, string &) const;

  void display();

  void search(string);
};

class CustomerInfo {
private:
  string fixed Deposit_ID;

  string current_ID;
  string loan_ID;

public:
  customerType(string, string, address Type, string, int, int, string, string,
               string)

      void set_cust(string string, address Type, string, int, int, string,
                    string, string);

  void get_cust(string &, string &address Type &, string &int &int &, string &,
                string &, string &) const;

  void display();

  void search(string);
}
