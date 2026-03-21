#include<iostream>
using namespace std;

int main(){
    int positive=0,negative=0,zero=0;
    int num;
    char ch;

    do{
        cout<<"Enter a number: ";
        cin>>num;

        if(num>0){
            positive++;
        }
        else if(num<0){
            negative++;
        }
        else{
            zero++;
        }

        cout<<"Do you want to enter another number? (y/n): ";
        cin>>ch;
} while(ch=='y' || ch=='Y');
    cout<<"Positive numbers: "<<positive<<endl;
    cout<<"Negative numbers: "<<negative<<endl;
    cout<<"Zeroes: "<<zero<<endl;

    return 0;
}