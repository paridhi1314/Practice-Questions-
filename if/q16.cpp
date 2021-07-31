#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter angle 1"<<endl;
	cin>>a;
	cout<<"Enter angle 2"<<endl;
	cin>>b;
	cout<<"Enter angle 3"<<endl;
	cin>>c;
	if(a == b == c)
	{
		cout<<"Equilateral triangle "<<endl;
	}
	if(a == b || 
	
	a == c || b == c)
	{
		cout<<"isosceles triangle "<<endl;
		
	}
	else
	{
		cout<<"Scalene triangle"<<endl;
	}
	return 0;
}
