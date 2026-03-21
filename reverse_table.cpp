#include<iostream>
using namespace std;

int main(){
    int n=10;
int tables;
cout<<"Enter the number of tables: ";
cin>>tables;

for(int i= 0;i<n;i++){
    cout<<tables<<" x "<<n-i<<" = "<<tables*(n-i)<<endl;
}
return 0;
}