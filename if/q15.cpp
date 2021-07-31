#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter first side"<<endl;
	cin>>a;
	cout<<"Enter second side"<<endl;
	cin>>b;
	cout<<"Enter third side"<<endl;
	cin>>c;
	if((a+b>c) && (a+c>b) && (c+b>a))
	{
		cout<<"Triangle is valid "<<endl;
	}
	else
	{
		cout<<"Triangle is not valid "<<endl;
	}
	return 0;
	
}
