
//SWAPPING OF ANY TWO NUMBER

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=5,b=7,c=0;
cout<< "BEFORE SWAPPING:"<<endl<<"a="<<a<<setw(8)<<"b="<<b<<setw(8)<<endl;
c=a;
a=b;
b=c;
cout<< "AFTER SWAPPING:"<<endl<<"a="<<a<<setw(8)<<"b="<<b;
return 0;
}
