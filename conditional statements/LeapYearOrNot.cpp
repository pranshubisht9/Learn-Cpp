/* Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is a leap year but if the year
is century year like 2000,1900,2100 then it must be disible by 400.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"*****YEAR IS LEAP OR NOT*****"<<endl;
    cout<<"ENTER THE YEAR:";
    int year;
    cin>>year;
    if (year%4==0)
    {
        cout<<"THIS IS A LEAP YEAR"<<endl;
    }
    else if(year%400==0)                    //((year%4) != 0)
    {
        cout<<"THIS YEAR IS LEAP YEAR"<<endl;
    }

    else
    {
        cout<<"THIS YEAR IS NOT LEAP YEAR"<<endl;
    }

    return 0;
}