#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter character "<<endl;
	cin>>ch;
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A ' && ch <= 'Z'))
	{
		cout<<ch<<" is a alphabet"<<endl;
	}
	if(ch >= '0' && ch <= '9')
	{
		cout<<ch<<" is a digit"<<endl;
	}
	else
	{
		cout<<ch<<" is a special character"<<endl;
	}
	return 0;
}
