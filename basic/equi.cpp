#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float side,Area;
	cout<<"Enter length of any side "<<endl;
	cin>>side;
	Area = (sqrt(3)/4)*(side*side);
	cout<<"Area of equilateral triangle "<<Area;
	cin>>Area;
	return 0;
}
