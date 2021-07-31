#include<iostream>
using namespace std;

int main()
{
	int last,temp;
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	
	last = n%10;
	while(n>=0)
	{
		n = n/10;
	}
	cout<<"before First digit "<<n<<endl;
	cout<<"before Last digit "<<last<<endl;
	
	temp = n ;
	n = last;
	last = temp;
	cout<<"After Swap first "<<n<<endl;
	cout<<"After Swap last "<<last<<endl;
	return 0;
}
