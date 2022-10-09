///* Take two values from user and print negative or positive among them*/

#include<iostream>
using namespace std;
int main()
{
double a;
cout<<"ENTER NUMBER FOR FIND NEGATIVE OR POSITIVE NUMBER: "<<endl;
cin>>a;

if (a<0)
{
    cout<<"THE NUMBER IS NEGATIVE"<<endl;
}
else if (a==0)
{
    cout<< "THIS IS WHOLE NUMBER NOR NEGATIVE OR POSITIVE"<<endl;
}
else
{
    cout<<"THE NUMBER IS POSITIVE"<<endl;
}
return 0;
}