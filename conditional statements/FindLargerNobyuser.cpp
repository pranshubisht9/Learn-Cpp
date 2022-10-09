/* Take two values from user and print greatest among them*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cout<<"******TO FIND THE LARGER OF TWO NUMBER******"<<endl;
    cout<<setw(10)<<"ENTER FIRST NUMBER:"<<endl;
    cin>>a;
    cout<< "ENTER SECOND NUMBER:"<<endl;
    cin>>b;
    if (a>b)
    {
        cout<<"LARGER NO:"<<setw(4)<<a; // setw is always use after the "statement"
    }
    else if(a<b)
    {
        cout<<"LARGER NUMBER:"<<setw(4)<<b;
    }
    else {
    cout<<"EQUAL NUMBER WHICH IS"<<setw(4)<<a||b;
    }
    return 0;
    }
    