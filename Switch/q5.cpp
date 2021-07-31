#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter number"<<endl;
	cin>>num;
	
	switch(num % 2 == 0){
		case 0:
			cout<<num<<" is odd"<<endl;
			break;
		case 1:
			cout<<num<<" is even"<<endl;
			break;
	}
	return 0;
}
