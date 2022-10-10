// Write a program to print the address of a variable whose value is input from user.

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter any value:"<<endl;
    int a;
    cin>>a;
    int*b = &a;
    cout<<"the address of a variable"<<endl; cout<<&a;

    return 0;
}