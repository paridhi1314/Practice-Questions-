#include<iostream>
using namespace std;

int main(){
	int a[1000],n,i,sum=0;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	
	cout<<"enter the elements "<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"The sum is: "<<endl;
	for(i=0;i<n;i++){
		sum = sum + a[i];
	
		
	}
		cout<<sum<<endl;
	
	return 0;
	
}
