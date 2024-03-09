#include <fstream>
// #include <Manager.h>
#include "EmployeeInfo.h"
#include "addressType.h"

using namespace std;

EmployeeInfo::EmployeeInfo(string n, addressType a, string e, int p, int cn, string i, string d, float s, int check)
    : infoType(n, a, e, p, cn, i)
{
    designation = d;
    if (s >= 0)
        salary = s;
    else
        salary = 0;
}

void EmployeeInfo::set_emp(const string &n, const addressType &a, const string &e, const int &p, const int &cn, const string &i, const string &d, const float &s)
{
    name = n;
    address = a;
    emailAddress = e;
    phone_num = p;
    if (cn >= 0)
        Cnic = cn;
    else
        Cnic = 0;
    id = i;
    designation = d;
    if (s >= 0)
        salary = s;
    else
        salary = 0;
}

void EmployeeInfo::get_emp(string &n, addressType &a, string &e, int &p, int &cn, string &i, string &d, float &s)
{
    infoType::getinfo(n, a, e, p, cn, i);
    s = salary;
    d = designation;
}

void EmployeeInfo::display()
{
    infoType::display();
    cout << "Designation: " << designation << endl;
    cout << "Salary: " << salary << endl;
}
