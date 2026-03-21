#include<iostream>
using namespace std;

int main()
{ 
    int n;
    int pos=0,neg=0,zero=0;
    cout<<"enter the value of n:";
    cin>>n;

    switch(n)
    {
        case 1:
            pos++;
            break;
        case -1:
            neg++;
            break;
        case 0:
            zero++;
            break;
        default:
            cout<<"Do you want to continue ? (y/n) :"<<endl;
    }
    cout<<"Positive numbers: "<<pos<<endl;
    cout<<"Negative numbers: "<<neg<<endl;
    cout<<"Zeroes: "<<zero<<endl;
    return 0;

}