#include<iostream>
using namespace std;

int main()
{
	int reversenum = 0,rem;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	
	while ( n != 0)
	{
		rem = n % 10;
		reversenum = reversenum*10 + rem;
		n = n / 10;
	}
	cout<<"Reverse number is "<<reversenum<<endl;
	return 0;
}
