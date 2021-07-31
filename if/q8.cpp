#include<iostream>
using namespace std;


int main()
{
	char ch;
	cout<<"Enter a Character"<<endl;
	cin>>ch;
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<ch<<" is a character"<<endl;
	}
	else
	{
		
		cout<<ch<<" is not a character"<<endl;
	}
	return 0;
}
