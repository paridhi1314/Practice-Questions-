#include<iostream>
using namespace std;

int main()
{
	
	int n,temp,sum,rem;
	cout<<"Enter the number "<<endl;
	cin>>n;
	
	temp = n;
	
	sum=0;
	
	while(n > 0){
		rem = n%10;
	int i =1;
	int ans = 1 ;
	while(rem >= i)
	{
		ans = ans * i;
		i++;
	}
	sum = sum + ans;
	
	n = n/10;
		
	}
	
	if(sum == n){
		cout<<n<<" is a STRONG number "<<endl;
	}
	else
	
	{
		cout<<n<<" is not a strong number"<<endl;
	}
	
	return 0;
}
