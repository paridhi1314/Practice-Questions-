#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter character"<<endl;
	cin>>ch;
	
	if(ch >= 'A' && ch <= 'Z')
	{
		cout<<ch<<" is in uppercase"<<endl;
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		cout<<ch<<" is in lowercase "<<endl;
	}
	return 0;
}
