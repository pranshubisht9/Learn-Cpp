
//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;
int main()
{
    cout<<"*****ENTER NUMBER FOR CHECK THIS RECTANGLE IS SQUARE OR NOT*****"<<endl;
    double length,breadth;
    cout<<endl<<"ENTER LENGTH:"<<endl;
    cin>>length;
    cout<<"ENTER BREADTH:"<<endl;
    cin>>breadth;
    if (length==breadth)
    {
        cout<<"THIS RECTANGLE IS SQUARE"<<endl;
    
    }
    else
    {
        cout<<"THIS RECTANGLE IS NOT A SQUARE"<<endl;
    
    }
 return 0;   
}
