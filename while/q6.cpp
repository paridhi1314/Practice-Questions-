#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
    for(int i =1; i<=n; i++)
    {
    	if(i%2 == 0)
    	{
    		cout<<i<<endl;
			sum = sum + i;
    		
		}
		
	}
	cout<<"Sum is "<<sum<<endl;
	return 0;
}
