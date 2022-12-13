
#include <iostream>
using namespace std;
class test
{
	int age,vehical;
	double income;
	string city;
	public:
		class error
		{
			public:
				error(int a)
				{
					cout<<" Invalid age or vehical type"<<endl;
				}
				error(double b)
				{
					cout<<"Invalid income"<<endl;

				}
				error(string c)
				{
					cout<<"Invalid city"<<endl;
				}

		};
		void input()
		{
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<"Enter type of vehical: "<<endl;
			cin>>vehical;
			cout<<"Enter salary: "<<endl;
			cin>>income;
			cout<<"Enter city: "<<endl;
			cin>>city;
			if(age<18 || age>55)
				throw error(age);
			else
			if(vehical!=4)
				throw error(vehical);
			else
			if(city!="Pune" && city!="Mumbai" && city!="Bangalore" && city!="Chennai")
				throw error(city);
			else
			if(income<50000 || income>100000)
				throw error(income);
			else
				display();

		}
		void display()
		{
			cout<<"Age: "<<age<<endl;
			cout<<"Vehical type: "<<vehical<<endl;
			cout<<"City: "<<city<<endl;
			cout<<"Salary: "<<income<<endl;
		}
};
int main()
{
	test t;
	try
	{
		t.input();
	}
	catch(test::error)
	{
		cout<<"Invalid data";
	}
	return 0;
}
