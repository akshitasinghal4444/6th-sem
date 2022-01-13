/*
1 - x2/2! + x4/4! – x6/6! + ….........
*/

#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        cout<<"1 ";
        return;
    }

    print(n-1);

    if(n%2!=0)
    cout<<"- x"<<2*n<<"/"<<2*n<<"! ";
    else
    cout<<"+ x"<<2*n<<"/"<<2*n<<"! ";
}

int main()
{
    int n;
    cin>>n;

    print(n-1);
    return 0;
}