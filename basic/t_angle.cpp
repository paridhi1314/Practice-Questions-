#include<iostream>
using namespace std;

int main()
{
	float a1,a2;
	cout<<"Enter angle 1 "<<endl;
	cin>>a1;
	cout<<"Enter angle 2"<<endl;
	cin>>a2;
	float t_angle = 180-(a1+a2);
	cout<<"Enter third angle : "<<t_angle<<endl;
}
