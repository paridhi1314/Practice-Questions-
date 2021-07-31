#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	int count = 0;
	
	cout<<"Enter the elements of an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
