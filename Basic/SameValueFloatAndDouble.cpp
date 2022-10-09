
// SAME VALUE OF FLOAT AND DOUBLE

#include<iostream>
using namespace std;
int main()
{
      float a=5.5F; /* Same value but using specific datatype value by using f/F */
    double b=5.5l; // same value but using specific datatype value is by using L/l
    long double c=a+b;
    cout<<c<<endl<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c);
    return 0;

} 