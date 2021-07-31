#include<iostream>
using namespace std;

int main()
{
	int reversenum = 0,rem,temp;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	temp = n;
	
	while ( n != 0)
	{
		rem = n % 10;
		reversenum = reversenum*10 + rem;
		n = n / 10;
	}
	if(temp == reversenum)
	{
		cout<<reversenum<<"  is a palindrom"<<endl;
	}
	else
	{
		cout<< "  not a palindrome"<<endl;
	}
	return 0;
}
