#include<iostream>
using namespace std;

int main(){
	int arr[1000],n;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	
	cout<<"Enter the elements in array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The elements are  "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}
