#include<iostream>
using namespace std;

int main(){
    int n=10;
    int tables;
    cout<<"Enter the number of tables: ";
    cin>>tables;

    for(int i= 0;i<n;i++){
        cout<<tables<<" x "<<i+1<<" = "<<tables*(i+1)<<endl;
       
    }
    return 0;

}