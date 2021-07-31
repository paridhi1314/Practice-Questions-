#include<iostream>
using namespace std;

int main()
{
	char operat;
	cout<<"Enter operator "<<endl;
	cin>>operat;
	float a,b;
	cout<<"Enter two operands"<<endl;
	cin>>a>>b;
	
	switch(operat)
	{
		case '+':
			cout<<"Addition : "<< a+b<<endl;
			break;
		case '-':
			cout<<"Subtraction : "<<a-b<<endl;
			break;
		case '*':
			cout<<"Multiplication : "<<a*b<<endl;
			break;
		case '/':
			cout<<"Division : "<<a/b<<endl;
			break;
	}
	return 0;
}
