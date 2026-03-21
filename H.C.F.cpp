//H.C.F
#include<iostream>
using namespace std;

int main(){
    int a,b,r;
    cout<<"Enter value of a and b : ";
    cin>>a>>b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cout<<"H.C.F is: "<<a;

}