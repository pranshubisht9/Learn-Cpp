#include<iostream>
using namespace std;

int main()
{
char a= 'A'&&'E'&&'I'&&'O'&&'U';
char c= 'a'&&'e'&&'i'&&'o'&&'u';
char b;
cout<<"ENTER ANY LETTER TO FIND VOWEL OR CONSONANT"<<endl<<endl;
cout<<"ENTER LETTER"<<endl; 
cin>> b;

if (b==a||c)
{
    cout<< "YOUR LETTER IS VOWEL"<<endl;

}
else
{
cout<<"YOUR LETTER IS CONSONANT"<<endl;
}
return 0;
}