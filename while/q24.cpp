#include<iostream>
using namespace std;

int main()
{
	int num1,num2,ans=1;
	cout<<"Enter the number "<<endl;
	cin>>num1;
	cout<<"Enter the number "<<endl;
	cin>>num2;
	
	int min = (num1<num2) ? num1 : num2;
	
	for(int i=0;i<=min;i++){
		
		if(num1 % i == 0 && num2 % i == 0){
			ans = i;
			
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
