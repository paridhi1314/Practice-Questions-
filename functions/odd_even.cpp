#include<iostream>
using namespace std;

int odd_even(int n)
{
	if(n%2 == 0){
		cout<<"even"<<endl;
	}
	else
	{
		cout<<"odd"<<endl;
	}
	
	
}


int main()
{
	int n;
	cin>>n;
	
	odd_even(n);
	return 0;
}
