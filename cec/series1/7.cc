/*
1 + 2 + 4 + 8 + 16 + ... n terms
*/

#include<iostream>
#include<math.h>
using namespace std;

void print(int n)
{
    if(n<0)
    return;

    print(n-1);
    cout<<pow(2,n)<<" + ";
}

int main()
{
    int n;
    cin>>n;

    print(n-1);
    return 0;
}