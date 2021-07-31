#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;
	
	switch(a > b)
	{
		case 0:
			cout<<b<<" is maximum"<<endl;
			break;
		case 1:
		    cout<<a<<" is maximum"<<endl;
			break;	
    }
    return 0;
}
