#include<iostream>
using namespace std;

int main()
{
	double sp,cp;
	cout<<"Enter cost price "<<endl;
	cin>>cp;
	cout<<"Enter selling price "<<endl;
	cin>>sp;
	if(sp>cp)
	{
		cout<<"Profit"<<endl;
	}
	else if(cp>sp)
	{
		cout<<"Loss "<<endl;
	}
	else
	{
		cout<<"Neither profit nor loss "<<endl;
	}
	return 0;
	
}
