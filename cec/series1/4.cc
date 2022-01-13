/*
first n odd no.s 
*/

#include<iostream>
using namespace std;

void print(int n)
{
    if(n<0)
    return;

    print(n-1);
    cout<<2*n+1<<" ";
}

int main()
{
    int n;
    cin>>n;

    print(n-1);
    return 0;
}