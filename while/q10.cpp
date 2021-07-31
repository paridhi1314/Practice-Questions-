#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,first,last;
	cout<<"Enter the number "<<endl;
	cin>>n;
	last = n%10;
	while(n>=10)
	{
		n= n/10;
		
	}
	cout<<"First digit "<<first<<endl;
	cout<<"Last digit "<<last<<endl;
	return 0;
}
