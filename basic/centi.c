#include<iostream>
using namespace std;

int main(){
double cm;
cout<<"Enter length in centimeters "<<endl;
cin>>cm;
double km,m;
m = cm/100;
km = cm/1000;
cout<<"In meters : "<<m<<endl;
cout<<"In kilometers : "<<km<<endl;
return 0;
}
