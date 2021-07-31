#include<iostream>
using namespace std;
int main(){
	int arr[1000],i,n;
	int max = arr[0], sec_max = arr[0];
	
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	
	cout<<"Enter the  elements  "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	for(i=0;i<n;i++){
		if(arr[i] > max){
			sec_max = max;
			max = arr[i];
			
		}
//		else if(arr[i] > sec_max && arr[i] < max){
//			sec_max = arr[i];
//		}
	}
	
	cout<<"Largest element is "<<max<<endl;
	cout<<"Second largest elemnt is "<<sec_max<<endl;
	return 0;
}
