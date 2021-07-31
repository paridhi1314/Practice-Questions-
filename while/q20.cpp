#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character "<<endl;
	cin>>ch;
	
	for(int i=0;i<255;i++){
		ch = i;
		cout<<ch<<"\t\t\t"<<i<<endl;
	}
	
	cout<<endl;

	return 0;
}
