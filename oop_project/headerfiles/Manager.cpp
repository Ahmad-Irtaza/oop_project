#include "Manager.h"
using namespace std;
int main()

{
Manager::Manager()

	{
		float amount,ir,s;
		int d,m,y,tr,pc,ph,cn,count;
		string name,st,city,ar,country,em,i,fi,ci,li,d,pas;

		fstream rw;
		rw.open("deposit.txt",ios::in);
		count=0;
	while(rw>>f_acc[count].acc_id>>f_acc[count].user_id>>amount>>d>>m>>y>>ir)
		{
			
	
		f_acc[count].balance.set(amount);
		f_acc[count].dateof_creation.set(d,m,y);
		rw>>d>>m>>y;
		f_acc[count].dateof_termination.set(d,m,y);
		f_acc[count].interest_rate=ir;
		count++;
		}
		
		rw.close();
		count=0;
		rw.open("current.txt",ios:in);
	while(rw>>c_acc[count].c_id>>c_acc[count].user_id>>amount>>d>>m>>y>>c_acc[count].tr)	
	{
			
	
		c_acc[count].balance.set(amount);
		c_acc[count].dateof_creation.set(d,m,y);
		
		count++;
		}
		rw.close()
		count=0;
		rw.open("loan.txt",ios::in);
		while(rw>>i>>name>>st>>city>>ar>>pc>>country>>em>>ph>>cn>>d>>s>>pas)
		{
			
	addressType a(st,city,ar,pc,country);
	li[count].user.set(name,a,em,ph,cn,i,d,s,pas);
	rw>>i>>name>>st>>city>>ar>>pc>>country>>em>>ph>>cn>>fi>>ci>>li;
	addressType a(st,city,ar,pc,country);
	li[count].cust.set_cust(name,a,em,ph,cn,i,)

		rw>>l[count].cust.set_cust(name,a,em,ph,cn,i,fi,ci,li);
		rw>>l[count].amount;
			count++;
	}
			rw.close();
			count=0;
			rw.open("user.txt",ios::in)
			i=0;
	while(rw>>u_people[count].id>>u_people[count].Name>>st>>city>>ar>>country>>u_people[count].EmailAddress>>u_people[count].Phone_num>>u_people[count].Cnic)>>u_people[count].password)
		{
			
	
		u_people[count].Address.set(st,city,ar,country);
		count++;
		
		}
		
		rw.close();
		
		count=0;
			rw.open("employee.txt",ios::in)
	while(rw>>e_people[count].id>>e_people[count].Name>>st>>city>>ar>>country>>e_people[count].EmailAddress>>u_people[count].Phone_num>>e_people[count].Cnic)>>e_people[count].designation>>e_people[count].salary)
		{
			
	
		e_people[count].Address.set(st,city,ar,country);
		count++;
		
		}
		
		rw.close();
		rw.open("customer.txt",ios:in);
		while(rw>>c_people[count].id>>c_people[count].Name>>st>>city>>ar>>country>>c_people[count].EmailAddress>>c_people[count].Phone_num>>c_people[count].Cnic)>>c_people[count].fixedDeposit_id>>c_people[count].current_ID>>c_people[count].loan_ID)
		{
			
	
		c_people[count].Address.set(st,city,ar,country);
		count++;
		
		}
		
		rw.close();
		
		count=0;
	

}	
	Manager::~Manager()
	{
		
		float amount,ir,s;
		int d,m,y,tr,pc,ph,cn,;
		string name,st,city,ar,country,em,i,fi,ci,li,d,pas;
		dateType da,db;
		adddressType a;
		balanceType b;
		userType u;
		customerInfo cc;
		employeeType ee;
		
		for(int j=0;j<50;j++)
		{
			if(f_acc[j].acc_id!="")
			{
				
			
			f_acc[j].get(fi,li,ci,b,da,ir,db);
			da.get(d,m,y);
		rw.open("temp.txt",ios::app)
			rw<<f_acc[j].acc_id<<endl<<f_acc[j].user_id<<endl<<b.get()<<d<<endl<<m<<endl<<y<<endl<<ir<<endl;
			db.get(d,m,y);
		rw<<d<<endl<<m<<endl<<y<<endl;
		
			}
			remove("deposit.txt");
		    rename("temp.txt", "deposit.txt");
		    rw.close();
		
		}
		
		for(int j=0;j<50;j++)
		{
			if(c_acc[j].acc_id!="")
			{
				
			
			c_acc[j].get(fi,li,ci,b,da,pc);
			da.get(d,m,y);
		rw.open("temp.txt",ios::app)
			rw<<c_acc[j].acc_id<<endl<<c_acc[j].user_id<<endl<<b.get()<<d<<endl<<m<<endl<<y<<endl<<pc<<endl;		
			}
			remove("current.txt");
		    rename("temp.txt", "current.txt");
		    rw.close();
		
		}
		
		for(int j=0;j<50;j++)
		{
			if(l[j].user.id!="")
			{
				
			rw.open("temp.txt",ios::app)
			l[j].get(u,cc,b);
			rw<<u.id<<endl;
			rw<<u.Name<<endl;
			u.Address.get(st,city,ar,country);
			rw<<st<<endl<<city<<endl<<ar<<endl<<country;
			rw<<u.EmailAddress<<endl;
			rw<<u.Phone_num<<endl;
			rw<<u.Cnic<<endl;
			
			
			rw<<cc.id<<endl;
			rw<<cc.Name<<endl;
			cc.Address.get(st,city,ar,country);
			rw<<st<<endl<<city<<endl<<ar<<endl<<country;
			rw<<cc.EmailAddress<<endl;
			rw<<cc.Phone_num<<endl;
			rw<<cc.Cnic<<endl;
			rw<<cc.fixedDeposit_id<<endl;
			rw<<cc.current_id<<endl;
			rw<<cc.loan_id<<endl;
			rw<<b.get()<<endl;		
			}
			remove("loan.txt");
		    rename("temp.txt", "loan.txt");
		    rw.close();
		
		}
		for(int j=0;j<50;j++)
		{
			if(u_people[j].id!="")
			{
			u=u_people[j];	
			rw<<u.id<<endl;
			rw<<u.Name<<endl;
			u.Address.get(st,city,ar,country);
			rw<<st<<endl<<city<<endl<<ar<<endl<<country;
			rw<<u.EmailAddress<<endl;
			rw<<u.Phone_num<<endl;
			rw<<u.Cnic<<endl;
			
			rw.open("temp.txt",ios::app)
			rename("temp.txt", "user.txt");

			u_people[j]
		
			}
			for(int j=0;j<50;j++)
		{
			if(c_people[j].id!="")
			{
			cc=c_people[j];	
			rw<<cc.id<<endl;
			rw<<cc.Name<<endl;
			cc.Address.get(st,city,ar,country);
			rw<<st<<endl<<city<<endl<<ar<<endl<<country;
			rw<<cc.EmailAddress<<endl;
			rw<<cc.Phone_num<<endl;
			rw<<cc.Cnic<<endl;
			rw<<cc.fixedDeposit_id<<endl;
			rw<<cc.current_id<<endl;
			rw<<cc.loan_id<<endl;
			rw.open("temp.txt",ios::app)
			rename("temp.txt", "customer.txt");

			u_people[j]
		
			}	
	}
		for(int j=0;j<50;j++)
		{
			if(e_people[j].id!="")
			{
			ee=c_people[j];	
			rw<<ee.id<<endl;
			rw<<ee.Name<<endl;
			ee.Address.get(st,city,ar,country);
			rw<<st<<endl<<city<<endl<<ar<<endl<<country;
			rw<<ee.EmailAddress<<endl;
			rw<<ee.Phone_num<<endl;
			rw<<ee.Cnic<<endl;
			rw<<ee.designation<<endl;
			rw<<ee.salary<<endl;
			rw.open("temp.txt",ios::app)
			rename("temp.txt", "employee.txt");

			u_people[j]
		
			}	
	}
		
}
		
	}
	bool Manager::search()
	{
		while(1)
		{
	
		int choice;
		cout<<"Search in Customers?"
		cout<<"Search in Fixed deposits account?\n enter 1 if yes"<<endl;
		cout<<"Search in Current account?\n enter 2 if yes"<<endl;
		cout<<"Search in Loans?\n enter 3 if yes"<<endl;
		cout<<"Search in Customers?\n 4 if yes"<<endl;
		cout<<"Search in Employees?\n 5 if yes"<<endl;
		cout<<"Search in Users\n 6 if yes"<<endl;
		cout<<" enter -1 to exit current menu"<<endl;
		int check=0;
		
		cin>>choice;
		if(choice==1)
		{
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(f_acc[i].cust_id=="")
				break;
				else if(f_acc[i].cust_id==id)
				{
					f_acc[i].display();
					check=1;
				}
				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the id has not beem found\n";
			
		}
		else if(choice==2)
		{
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(c_acc[i].cust_id=="")
				break;
				else if(c_acc[i].cust_id==id)
				{
					c_acc[i].display();
					check=1;

				}				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the ID has not beem found\n";
		}
		else if(choice==3)
		{
			
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(l[i].cust.id=="")
				break;
				else if(c_acc[i].cust_id==id)
				{
					l[i].display();
					check=1;
				}
				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the ID has not been found\n";
		}
		else if(choice==4)
		{
			
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(c_people[i].id=="")
				break;
				else if(c_acc[i].cust_id==id)
				{
					c_people[i].display();
					check=1;
				}
				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the ID has not been found\n";
		}
		else if(choice==5)
		{
			
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(e_people[i].id=="")
				break;
				else if(e_acc[i].id==id)
				{
					e_people[i].display();
					check=1;
				}
				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the ID has not been found\n";
		}
		
		else if(choice==6)
		{
			
			string id;
			cout<<"Enter user id"<<endl;
			cin>>id;
			for(int i=0;i<50;i++)
			{
				if(u_people[i].id=="")
				break;
				else if(u_acc[i].id==id)
				{
					u_people[i].display();
					check=1;
				}
				
			}
			if(check==0)
			cout<<"if nothing has been displayed, the ID has not been found\n";
		}
		else if(choice==-1)
		break;
		else 
		cout<<"invalid input\n";
		
		}
	}
}
