#include<string>

class balanceType
{
	float amount;
	
	public:
	
	balanceType(float);
	void set(float);
	float get();
	void deposit(float);
	void withdraw(float);
};

class accountType
{	protected:
	
	string acc_ID;
	string user_ID;
	string cust_ID;
	balanceType balance;
	dateTy pe dateof_creation;
	
	public:
	
	accountType(string,string,string,balanceType,dateType);
	void display();
	void set(const string&,const string&,const string&,const balanceType&,const dateType&);
	void get(string&,string&,string&,balanceType&,dateType&)const;
	string search(string);
	string search(dateType);
		
};

class Current:protected accountType
{
	int transaction_limit;
	
	public:
	Current(string,string,string,balanceType,dateType,int);
	void set(string,string,string,balanceType,dateType,int);
	void get(string&,string&,string&,balanceType&,dateType&,int&)const;
	void display();
	string search(string);
};

class Fixed_deposit:protected accountType
{
	float interest_rate;
	dateType dateof_termination;
	
	public:
	Fixed_deposit(string,string,string,balanceType,dateType,float,dateType);
	void set(string,string,string,balanceType,dateType,float,dateType);
	void get(string&,string&,string&,balanceType&,dateType&,float&,dateType&)const;
	void display();
	string search(string);
};

