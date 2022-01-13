/*
first n prime no.s 
*/

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
        return 0;

    return 1;
}

void print(int n,int i)
{
    if(n==0)
    return;

    if(isPrime(i))
    {
        cout<<i<<" ";
        print(n-1,i+1);
    }
    else
    print(n,i+1);
}

int main()
{
    int n;
    cin>>n;

    print(n,2);
    return 0;
}