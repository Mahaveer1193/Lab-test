//Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, Pay_Rate and Salary.
// Write necessary functions to calculate and display the salary of Worker.
//(Use Default values for Pay_Rate Rs. 500 per hours)
 
					
//Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, Pay_Rate and Salary.
// Write necessary functions to calculate and display the salary of Worker.
//(Use Default values for Pay_Rate Rs. 500 per hours)
 
					


#include<iostream>
using namespace std;


class info{
	protected:
		string name;
		int hour,rate;
		float salary;
		 
		public:
		
			void get(string name,int hour)
			{
				this->name=name;
				this->hour=hour;
			}
			
			info(){	rate=500; 			
					//DEFAULT
						
			}
			
				void show() {
			
				salary=hour*rate;
				cout<<"\n Your Salary is :"<<salary;
				
				
			}
};

int main()
{
	int hour;
	string name;
	cout<<"\n Enter name :";
	cin>>name;
	cout<<"\n Enter Hour :";
	cin>>hour;
	cout<<"\n Name of the worker is "<<name<<" working hours of a worker is "<<hour;
	info obj;
	obj.get(name,hour);
	obj.show();
}