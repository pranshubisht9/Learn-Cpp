/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"*****SCHOOL GRADING SYSTEM*****"<<endl;
    cout<<endl<<"ENTER YOUR MARKS:"<<endl;
    float marks;
    cin>>marks;
    if (marks<=0 && marks<=25)
    {
        cout<<"YOUR GRADE IS:"<<setw(4)<<"F"<<endl;
    }
    
    else if (marks<=45)                    //(25<marks>=45)
    {
        cout<<"YOUR GRADE IS:"<<setw(4)<<"E"<<endl;
    }
    else if (marks<=50)
    {
         cout<<"YOUR GRADE IS:"<<setw(4)<<"D"<<endl;
    }

    else if (marks<=60)        //(50<marks>=60) <-- wrong way, (marks>80 && marks<=100) <-- write way
{
         cout<<"YOUR GRADE IS:"<<setw(4)<<"C"<<endl;
}
    else if (marks<=80)
    {
         cout<<"YOUR GRADE IS:"<<setw(4)<<"B"<<endl;
    }
    else if(marks>80 && marks<=100)
    {
         cout<<"YOUR GRADE IS:"<<setw(4)<<"A"<<endl;
    }
    else{
        cout<<"INVALID MARKS";
    }
       return 0;
    
}
