/*
0, 1, 1, 2, 3, 5, 8, 13, 21 ………… n (Fibonacci series)
*/

#include<iostream>
using namespace std;

void fib(int n)
{
    int a,b,c;
    a=0,b=1;

    if(n==0)
    cout<<a;
    else if(n==1)
    cout<<a<<" "<<b;
    else
    {
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    fib(n);
    return 0;
}