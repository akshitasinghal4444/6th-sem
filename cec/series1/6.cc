/*
1 + 1/2 + 1/4 + 1/8 + ... n terms
*/

#include<iostream>
#include<math.h>
using namespace std;

void print(int n)
{
    if(n<0)
    return;

    print(n-1);
    cout<<"1/"<<pow(2,n)<<" + ";
}

int main()
{
    int n;
    cin>>n;

    print(n-1);
    return 0;
}