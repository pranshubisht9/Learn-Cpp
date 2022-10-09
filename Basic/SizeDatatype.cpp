
//TO FIND THE SIZE OF ALL DATATYPES

#include<iostream>
using namespace std;
int main()
{
    int a=5;
    float b=5.55;
    char c= 'c';
    double d = 5.5555;
    long double f = 5.5555555555;
    bool e = 1;
    cout<<"The Value Of INT:"<<a<<endl<<"The Size Of Int:"<<sizeof(a)<<endl;    // WE CAN USE SIZEOF() FOR FIND SIZE OF DATATYPE
    cout<<endl;
    cout<<"The Value Of FLOAT:"<<b<<endl<<"The Size Of FLOAT:"<<sizeof(b)<<endl;
    cout<<endl;
    cout<<"The Value Of CHAR:"<<c<<endl<<"The Size Of CHAR:"<<sizeof(c)<<endl;
    cout<<endl;
    cout<<"The Value Of DOUBLE:"<<d<<endl<<"The Size Of DOUBLE:"<<sizeof(d)<<endl;
    cout<<endl;
    cout<<"The Value Of LONG DOUBLE:"<<f<<endl<<"The Size Of LONG DOUBLE:"<<sizeof(f)<<endl;
    cout<<endl;
    cout<<"The Value Of BOOL:"<<e<<endl<<"The Size Of BOOL:"<<sizeof(e)<<endl;
    cout<<endl;
    return 0;
}
