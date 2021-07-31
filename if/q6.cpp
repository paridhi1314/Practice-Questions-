#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number "<<endl;
	cin>>num;
	if(num%5 == 0 && num%11 == 0)
	{
		cout<<"Number is divisible by 5 and 11 both "<<endl;
	}
	else
	{
		cout<<"Number is not divisible by both 5,11"<<endl;
	}
	return 0;
}
