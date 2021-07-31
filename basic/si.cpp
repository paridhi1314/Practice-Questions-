#include<iostream>
using namespace std;

int main(){
	
	double p,t,r;
	cout<<"Principle "<<endl;
	cin>>p;
	cout<<"Rate of interest "<<endl;
	cin>>r;
	cout<<"Time "<<endl;
	cin>>t;
	int si = p*r*t/100;
	cout<<"simple interest : "<<si<<endl;
	return 0;
}
