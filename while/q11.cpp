#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	cout<<"Enter the number "<<n;
	cin>>n;
	while(n!=0)
	{
		
		count++;
		n = n/10;
	}
	cout<<"The total number of digits are "<<count<<endl;
	return 0;
}
