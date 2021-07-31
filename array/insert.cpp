#include<iostream>
using namespace std;

int main()
{
	
	
	int n,x,i;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	
	cout<<"Enter the item to be inserted"<<endl;
	cin>>x;
	
	arr[n] = x;
	
	for(int i=0;i<n+1;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
