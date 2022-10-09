
// TO FIND THE QUOTENT AND REMAINDER 

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int remainder,quotent,dividend,divisor;
  cout<<"ENTER DIVIDEND"<< endl;
  cin>> dividend;
  cout<<"ENTER DIVISOR"<< endl;
  cin>> divisor;
  quotent=dividend/divisor;
  remainder=dividend % divisor;
  cout<< "QUOTENT IS:"<<quotent<<endl<<"REMAINDER IS:"<<remainder;
  return 0;  
}

