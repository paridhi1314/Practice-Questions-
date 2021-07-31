#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	int originaln = n;
	
	while(n>0){
		int lastDigit = n%10;
		sum = sum + pow(lastDigit,3);
		n=n/10;
	}
	if(sum == originaln){
		cout<<"Is a armstrong number"<<endl;
	}
	else
	{
		cout<<"Not a armstrong number"<<endl;
	}
}
