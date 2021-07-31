#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	int count =0;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
				count++;
				break;
				
			}
		
		}
		
	}
	cout<<"Total number of duplicates are "<<count;
	return 0;
	
}
