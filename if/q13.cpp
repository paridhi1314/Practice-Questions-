#include<iostream>
using namespace std;

int main()
{
	int month;
	cout<<"Enter days in months"<<endl;
	cin>>month;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout<<"Number of days are 31"<<endl;
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout<<"Number of days are 30"<<endl;
	}
	else if(month == 2 )
	{
		cout<<"Number of days are 28/29"<<endl;
	}
	else
	{
		cout<<"Invalid input"<<endl;
	}
	
	return 0;
}
