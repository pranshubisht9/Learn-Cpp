
/*  A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int yr_of_service;
    cout<<"ENTER YOUR YEAR OF SERVICE:"<<endl;
    cin>>yr_of_service;
    if (yr_of_service>5)
    {
        int salary,bonas;
        cout<<"ENTER YOUR SALARY:"<<endl;
        cin>>salary;
        bonas=salary*0.05;
        cout<<"YOUR NET BONAS:"<<setw(2)<<bonas;
        
    }
    else
    {
        cout<<endl<<"YOU ARE NOT ELIGIBLE FOR BONAS"<<endl;
    }
    return 0;
}