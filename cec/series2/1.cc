/*
1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + …… + 1/(n*n)
*/

#include<iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    return;

    print(n-1);
    cout<<"1/("<<n<<"*"<<n<<") + ";
}

int main()
{
    int n;
    cin>>n;

    print(n);
    return 0;
}