#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int base,expo;
	cout<<"Enter the base"<<endl;
	cin>>base;
	cout<<"Enter the expo"<<endl;
	cin>>expo;
	
	int ans;
	for(int i=1;i<=expo;i++)
	{
		ans = base * i;
		cout<<ans<<endl;
	}
	cout<<endl;
//	int ans = pow(base,expo);
//	cout<<ans<<endl;

return 0;
}
