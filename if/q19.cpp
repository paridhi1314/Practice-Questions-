#include<iostream>
using namespace std;

int main()
{
	float s1,s2,s3,s4,s5;
	cout<<"Enter marks of subject 1"<<endl;
	cin>>s1;
	cout<<"Enter marks of subject 2"<<endl;
	cin>>s2;
	cout<<"Enter marks of subject 3"<<endl;
	cin>>s3;
	cout<<"Enter marks of subject 4"<<endl;
	cin>>s4;
	cout<<"Enter marks of subject 5"<<endl;
	cin>>s5;
	float perc = ((s1+s2+s3+s4+s5)*100)/500;

	if(perc >= 90 && perc <= 100)
	{
		cout<<"GRADE A"<<endl;
	}
	else if(perc >= 80 && perc < 90)
	{
		cout<<"GRADE B"<<endl;
	}
	else if(perc >= 70 && perc < 80)
	{
		cout<<"GRADE C"<<endl;
	}
	else if(perc >= 60 && perc < 70)
	{
		cout<<"GRADE D"<<endl;
	}
	else if(perc >= 50 && perc < 40)
	{
		cout<<"GRADE E"<<endl;
	}
	else
	{
		cout<<"GRADE F"<<endl;
	}
	
	return 0;
	
}
