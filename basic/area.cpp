#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter radius"<<endl;
    cin>>r;
    int d = 2*r;
    cout<<"Diameter is : "<<d<<endl;
    int c = 2*3.14*r;
    cout<<"Circumference is "<<c<<endl;
    int a = 3.14*r*r;
    cout<<"Area is  : "<<a<<endl;
    return 0;
}