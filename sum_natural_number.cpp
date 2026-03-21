#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout<<"Enter a natural number: ";
    cin>>n;

    // Sum of natural numbers
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout<<"\n..The sum of first "<<n<<" natural numbers is...\n: "<<sum;

    // Sum of even numbers
    sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    cout<<"\n..The sum of even natural numbers is..\n: "<<sum;

    // Sum of odd numbers
    sum = 0;   // ⭐ important reset
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }
    cout<<"\n..The sum of odd natural numbers is..\n: "<<sum;

    return 0;
}
  

