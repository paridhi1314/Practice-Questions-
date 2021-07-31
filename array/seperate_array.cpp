#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	int arr[n];
	int arr1[n],arr2[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		
		if(i%2 == 0){
			cout<<arr1[i]<<endl;
		}
		else
		{
			cout<<arr2[i]<<endl;
		}
	}
	return 0;
}
