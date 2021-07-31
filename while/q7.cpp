#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cout<<"Enter the number n"<<endl;
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		if(i% 2 != 0)
		{
			cout<<i<<" ";
			sum = sum + i;
		}
		
	}
	cout<<"the sum is =  "<<sum<<endl;
	return 0;
}
