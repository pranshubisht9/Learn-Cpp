/*  A shop will give discount of 10% if the cost of purchased quantity is more than
1000. Ask user for quantity. Suppose one unit will cost 100. Judge and print total cost for user.     */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double quantity,price;
    cout<<"ENTER YOUR QUANTITY?";
    cin>>quantity;
    price=quantity*100;                       //quantity*100 = price; this is wrong.
    if (price>1000)
    {
        int discount = price*0.1;  // initiate value in separetely

    cout<<"YOUR QUANTITY AMOUNT IS EQUAL TO:"<<setw(4)<<(price-discount)<<endl;
    }
    else{
        cout<<"YOUR AMOUNT IS EQUAL TO:"<<setw(4)<<price<<endl;
    }
    return 0;
}