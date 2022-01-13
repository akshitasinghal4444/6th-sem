/*
1 + (1+2) + (1+2+3) + (1+2+3+4) + ......... + (1+2+3+4+...+n)
*/

#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    return;

    print(n-1);
    cout<<"1/(1";
    for(int i=2;i<=n;i++)
    cout<<"+"<<i;
    cout<<") + ";
}

int main()
{
    int n;
    cin>>n;

    print(n);
    return 0;
}