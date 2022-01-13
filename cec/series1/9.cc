/*
1 + 1/3 + 1/9 + 1/27 + 1/81 + ... n terms
*/

#include<iostream>
#include<math.h>
using namespace std;

void print(int n)
{
    if(n<0)
    return;

    print(n-1);
    cout<<"1/"<<pow(3,n)<<" + ";
}

int main()
{
    int n;
    cin>>n;

    print(n-1);
    return 0;
}