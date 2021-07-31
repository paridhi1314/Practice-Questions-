#include<iostream>
using namespace std;
int main()
{
	int a[1000],a1[1000],i,n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	
	cout<<"Enter the elements"<<endl;
	cin>>a[i];
	
	cout<<"The elements are "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	
	for(i=0;i<n;i++){
		a1[i] == a[i];
	}
	
	cout<<"Elements are second array"<<endl;
	for(i=0;i<n;i++){
		cout<<a1[i]<<endl;
	}
	return 0;
	
}
