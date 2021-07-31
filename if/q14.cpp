#include<iostream>
using namespace std;

int main()
{
	int a1,a2,a3;
	cout<<"Enter angle 1"<<endl;
	cin>>a1;
	cout<<"Enter angle 2"<<endl;
	cin>>a2;
	cout<<"Enter angle 3"<<endl;
	cin>>a3;
	int sum = a1+a2+a3;
	if(sum == 180 && a1 > 0 && a2 > 0 && a3 > 0)
	{
		cout<<"It is valid"<<endl;
	 } 
	 else
	 {
	 	cout<<"It is not valid "<<endl;
	 }
	 
	return 0;
	
}
