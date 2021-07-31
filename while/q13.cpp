#include<iostream>
using namespace std;

int main()
{
	int n,product=0,rem;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(n != 0 )
	{
		rem = n%10;
		product = product + rem;
		n = n/10;
	}
	cout<<"Product is "<<product<<endl;
	return 0;
}
