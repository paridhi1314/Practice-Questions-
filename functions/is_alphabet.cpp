#include<iostream>
using namespace std;

char is_alphabet(char a){
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
		cout<<"It is a alphabet"<<endl;
	}
	else
	{
		cout<<"Not a alphabet"<<endl;
	}
	
}

int main()
{
	char a;
	cin>>a;
	
	is_alphabet(a);
	return 0;
	
}
