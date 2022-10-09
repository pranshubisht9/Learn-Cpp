//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"***OLDEST AND YOUNGEST AMONG YOU"<<endl;
    cout<<endl<<"FIRST ENTER AGE:"<<setw(4);
    cin>>a;
    cout<<"SECOND ENTER AGE:"<<setw(4);                     //setw is not woring at this place like this
    cin>>b;
     cout<<"THIRD ENTER AGE:"<<setw(4);
     cin>>c;
     if (a>b && a>c)
     {
           cout<<"GREATER AGE:"<<setw(4)<<a<<endl;                      // (a<b&&c)"Wrong way"     
     }
     if (a<b&& a<c)
     {
         cout<<"YOUNGEST AGE:"<<setw(4)<<a<<endl;                   
     }
      if (b>a&& b>c)
     {
         cout<<"GREATEST AGE:"<<setw(4)<<b<<endl;
     }                                                      // check condtion initiate first
        if (b<a&& b<c)
     {
         cout<<"YOUNGEST AGE:"<<setw(4)<<b<<endl;                 //else if vs repeat if? else if main me srf 1 condition print hori hai.

     }
      if (c>a&& c>b)
     {
         cout<<"GREATEST AGE:"<<setw(4)<<c<<endl;
     }
      if (c<b&& c<a)
     {
         cout<<"YOUNGEST AGE:"<<setw(4)<<c<<endl;
     }
     return 0;
}