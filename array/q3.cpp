#include<iostream>
using namespace std;

int main()
{
	int a[1000],n,i;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	
	cout<<"enter the elements "<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	
        max=a[0];
        for(i=0;i<n;i++){
        	if(max > a[i])
        	{
        			max = a[i];
			}
		
		
	
		}
		
	
        min=a[0];
        for(i=0;i<n;i++){
        	if(min < a[i])
		{
			min = a[i];
		}
		}
		
		
		cout<<"The maximum element is "<<max;
		cout<<"The minimum element is "<<min;
	
	return 0;
}
