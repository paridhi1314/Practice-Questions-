#include<iostream>
using namespace std;

int main()
{
	float s1,s2,s3,s4,s5;
	cout<<"Enter marks of subject 1 : "<<endl;
	cin>>s1;
	cout<<"Enter marks of subject 2 : "<<endl;
	cin>>s2;
	cout<<"Enter marks of subject 3 : "<<endl;
	cin>>s3;
	cout<<"Enter marks of subject 4 : "<<endl;
	cin>>s4;
	cout<<"Enter marks of subject 5 : "<<endl;
	cin>>s5;
	float sum = s1+s2+s3+s4+s5;
	float average = sum/5;
	float percentage = average*100;
	cout<<"Sum is "<<sum<<sum<<endl;
	cout<<"Average is "<<average<<endl;
	cout<<"Percentage is "<<percentage<<endl;
	return 0;
	
}
