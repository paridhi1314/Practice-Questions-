#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number : "<<endl;
    cin>>b;
    int add = a+b;
    int subtract = a-b;
    int multiply = a*b;
    int divide = a/b;
    cout<<"Addition : "<<add<<endl;
    cout<<"Subtraction : "<<subtract<<endl;
    cout<<"Multiplication : "<<multiply<<endl;
    cout<<"Division : "<<divide<<endl;
    return 0;
}