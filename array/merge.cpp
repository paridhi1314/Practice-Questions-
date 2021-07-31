#include<iostream>
using namespace std;


int main()
{
	
	int n;
	cin>>n;
	
	int arr[n];
	
	
	cout<<"Emter elements of 1st array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	
	int m;
	cin>>m;
	
	int arr1[m];
	cout<<"Enter the elements of 2nd array"<<endl;
	for(int i=0;i<m;i++){
		cin>>arr[m];
	}
	
	int size = n+m;
	
	for(int i=0;i<size;i++){
		cout<<arr[n] + " " + arr[m]<<endl;
	}
	
	return 0;
	
	
}
