/* A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
cout<<"*****A student will not be allowed to sit in exam or not*****";
cout<<endl<<"NUMBER OF CLASSES HELD:"<<endl;
int class_held,class_attend;
cin>> class_held;
cout<<"NUMBER OF CLASSES ATTEND:"<<endl;
cin>> class_attend;
float percent;
percent = (class_attend*100)/class_held;
cout<< "Percentage of class attended"<<setw(5)<<percent<<endl;
if (percent<75 && percent>0)            // PRANSHU there is difference in && and ||
{
    cout<<"Student is not allowed to sit in exam."<<endl;
}
    else if (percent>=75)
    {
        cout<<"Student is allowed to sit in exam."<<endl;
    }
return 0;
}