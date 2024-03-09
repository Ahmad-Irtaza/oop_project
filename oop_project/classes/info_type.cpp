#include <iostream>
#include <string>

using namespace std;

// class addressType {
// private:
//     string street;
//     string city;
//     string area;
//     int postal_code;
//     string country;

// public:
//     addressType(string s, string c, string a, int p, string cn) {
//         street = s;
//         city = c;
//         area = a;
//         postal_code = p;
//         country = cn;
//     }

//     void set(string s, string c, string a, int p, string cn) {
//         street = s;
//         city = c;
//         area = a;
//         postal_code = p;
//         country = cn;
//     }

//     void get(string& s, string& c, string& a, int& p, string& cn) const {
//         s = street;
//         c = city;
//         a = area;
//         p = postal_code;
//         cn = country;
//     }
// };

class infoType {
private:
    string name;
    addressType address;
    string email_address;
    int phone_num;
    int cnic;
    string id;

public:
    infoType(string n, addressType a, string e, int p, int c, string i) {
        name = n;
        address = a;
        email_address = e;
        phone_num = p;
        cnic = c;
        id = i;
    }

    void setinfo(const string& n, const addressType& a, const string& e, const int& p, const int& c, const string& i) {
        name = n;
        address = a;
        email_address = e;
        phone_num = p;
        cnic = c;
        id = i;
    }

    void getinfo(string& n, addressType& a, string& e, int& p, int& c) const {
        n = name;
        address.get(a.street, a.city, a.area, a.postal_code, a.country);
        e = email_address;
        p = phone_num;
        c = cnic;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address.street << ", " << address.city << ", " << address.area << ", " << address.postal_code << ", " << address.country << endl;
        cout << "Email Address: " << email_address << endl;
        cout << "Phone Number: " << phone_num << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "ID: " << id << endl;
    }

    string search(string s) {
        if (name == s) {
            return id;
        }
        else {
            return 1;
        }
    }
};

class EmployeeInfo //public....
{
private:
    string designation;
    float salary;
    string name;
    string address;
    int age;
    int id;
    string employeeType;

public:
    EmployeeInfo(string empType, string empName, string empAddress, int empAge, int empID, string empDesignation, float empSalary) {
        employeeType = empType;
        name = empName;
        address = empAddress;
        age = empAge;
        id = empID;
        designation = empDesignation;
        salary = empSalary;
    }

    void set_emp(string empType, string empName, string empAddress, int empAge, int empID, string empDesignation, float empSalary) {
        employeeType = empType;
        name = empName;
        address = empAddress;
        age = empAge;
        id = empID;
        designation = empDesignation;
        salary = empSalary;
    }

    void get_emp(string& empType, string& empName, string& empAddress, int& empAge, int& empID, float& empSalary, string& empDesignation) const {
        empType = employeeType;
        empName = name;
        empAddress = address;
        empAge = age;
        empID = id;
        empSalary = salary;
        empDesignation = designation;
    }

    void display() {
        cout << "Employee Type: " << employeeType << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }

    void search(string empName) {
        if (name == empName) {
            cout << "Employee found!" << endl;
            display();
        }
        else {
            cout << "Employee not found." << endl;
        }
    }
};

class CustomerInfo://public....

{
private:
    string fixedDepositID;
    string currentID;
    string loanID;
    string customerType;
    string name;
    string address;
    int age;
    int phone;
    string email;

public:
    CustomerInfo(string fdID, string current_ID, string loan_ID, string cus_Type, string n, string add, int ag, int ph, string em) {
        fixedDepositID = fdID;
        currentID = current_ID;
        loanID = loan_ID;
        customerType = cus_Type;
        name = n;
        address = add;
        age = ag;
        phone = ph;
        email = em;
    }

    void setCust(string fdID, string current_ID, string loan_ID, string cus_Type, string n, string add, int ag, int ph, string em) {
        fixedDepositID = fdID;
        currentID = current_ID;
        loanID = loan_ID;
        customerType = cus_Type;
        name = n;
        address = add;
        age = ag;
        phone = ph;
        email = em;
    }

    void getCust(string& fdID, string& current_ID, string& loan_ID, string& cus_Type, string& n, string& add, int& ag, int& ph, string& em) const {
        fdID = fixedDepositID;
        current_ID = currentID;
        loan_ID = loanID;
        cus_Type = customerType;
        n = name;
        add = address;
        ag = age;
        ph = phone;
        em = email;
    }

    void display() const {
        string fdID, current_ID, loan_ID, cus_Type, n, add, em;
        int ag, ph;

        getCust(fdID, current_ID, loan_ID, cus_Type, n, add, ag, ph, em);

        cout << "Customer Info:" << endl;
        cout << "Fixed Deposit ID: " << fdID << endl;
        cout << "Current ID: " << current_ID << endl;
        cout << "Loan ID: " << loan_ID << endl;
        cout << "Customer Type: " << cus_Type << endl;
        cout << "Name: " << n << endl;
        cout << "Address: " << add << endl;
        cout << "Age: " << ag << endl;
        cout << "Phone: " << ph << endl;
        cout << "Email: " << em << endl;
    }

    void search(string any_key) const {
        string fdID, current_ID, loan_ID, cus_Type, n, add, em;
        int ag, ph;

        getCust(fdID, current_ID, loan_ID, cus_Type, n, add, ag, ph, em);

        if (fdID == any_key || current_ID == any_key || loan_ID == any_key || cus_Type == any_key || n == any_key || add == any_key || em == any_key) {
            display();
        }
    }
};

