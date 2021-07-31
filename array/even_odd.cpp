#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	int count=0,count1=0;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i] % 2 == 0){
			count++;
		}
		
		else{
			count1++;
		}
	}
	
	cout<<"Even numbers are"<<count<<endl;
	cout<<"Odd numbers are"<<count1<<endl;
	return 0;
}
