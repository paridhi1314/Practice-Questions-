#include<iostream>
using namespace std;

int main()
{
	int month;
	cout<<"Enter the month number"<<endl;
	cin>>month;
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"Number of days are 31"<<endl;
			break;
		case 2:
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"Number of days are 30"<<endl;
			break;
		default:
			cout<<"Number of days are 28/29"<<endl;
	}
	return 0;
}
