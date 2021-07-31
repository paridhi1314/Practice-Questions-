#include<iostream>
using namespace std;

int main(){
	int n,count;
	cin>>n;
	
	int frequency[100];
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		frequency[i] = -1;
	}
	
	for(int i=0;i<n;i++){
		count = 1;
		for(int j=i+1;j<n;j++){
			if(arr[i] == arr[j]){
				count++;
				frequency[j] = 0;
			}
		}
		if(frequency[i] != 0){
			frequency[i] = count;
		}
	}
	
	
	cout<<"Frequency of all elements of array "<<endl;
	
	for(int i=0;i<n;i++){
		if(frequency[i] != 0){
			cout<<arr[i]<<" occurs "<<frequency[i]<<" times \n";
		}
		
	}
	
	return 0;
}
