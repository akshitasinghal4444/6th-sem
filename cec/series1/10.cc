/*
1^1 + 2^2 + 3^3 + 4^4 + ... n terms
*/

#include<iostream>
#include<math.h>
using namespace std;

void print(int n)
{
    if(n==0)
    return;

    print(n-1);
    cout<<n<<"^"<<n<<" + ";
}

int main()
{
    int n;
    cin>>n;

    print(n);
    return 0;
}