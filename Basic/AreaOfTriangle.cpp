//TO FIND THE AREA OF TRIANGLE, TAKE INPUT VALUE OF BASE AND HEIGHT FROM USER

#include<iostream>
using namespace std;
int main()
{
int base,height;
float area;
cout<<"_FIND THE AREA OF TRIANGLE_"<<endl;
cout<<"Enter Base Of Triangle:";
cin>>base;
cout<<endl<<"ENTER THE HEIGHT OF TRIANGLE:";
cin>>height;
area=((0.5 * base) * height);
cout<<endl<<"THE AREA OF TRIANGLE IS:"<<area;
return 0;
}
