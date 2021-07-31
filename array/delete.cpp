#include<iostream>
using namespace std;

int main()
{
	
	int n,pos;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[n];
	}
	
	cout<<"Enter the position of an element to be deleted"<<endl;
	cin>>pos;
	
	if(pos<0 || pos>n){
		cout<<"Enter the valid position";
	}
	else{
		
		for(int i=n;i<pos;i--){
			arr[i] = arr[i+1];
		}
		pos--;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
	
	return 0;
}

	
	
	
	
	
	
	
	
	
