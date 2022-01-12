/*

1     7
12   67
123 567
1234567
123 567
12   67
1     7

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=n-2;

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
        cout<<j;

        for(j=k;j>0;j--)
        cout<<" ";

        for(j=n-i+1;j<=n;j++)
        cout<<j;

        k-=2;

        cout<<endl;
    }

    if(n%2!=0)
    {
        for(i=1;i<=n;i++)
            cout<<i;
        cout<<endl;
    }
    
    k=n%2;
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        cout<<j;

        for(j=k;j>0;j--)
        cout<<" ";

        for(j=n-i+1;j<=n;j++)
        cout<<j;

        k+=2;

        cout<<endl;
    }

    return 0;
}