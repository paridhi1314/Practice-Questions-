#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	double p,t,r;
	cout<<"Principle "<<endl;
	cin>>p;
	cout<<"Rate of interest "<<endl;
	cin>>r;
	cout<<"Time "<<endl;
	cin>>t;
	int ci = ci = p*pow((1+r/100),t);
	cout<<"compound interest : "<<ci<<endl;
	return 0;
}
