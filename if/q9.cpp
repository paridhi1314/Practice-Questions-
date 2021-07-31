#include<iostream>
using namespace std;

int main()
{
	
	char ch;
	cout<<"Enter a character "<<endl;
	cin>>ch;
	if(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
	{
		cout<<ch<<" is a vowel";
	}
	else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout<<ch<<" is a vowel"<<endl;
	}
	else
	{
		cout<<ch<<" is a consonant"<<endl;
	}
	return 0;
	
}
