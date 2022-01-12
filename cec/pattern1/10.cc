/*

1   1
 2 2
  3
 4 4
5   5

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=n;

    for(i=n;i>0;i--)
    {
        for(j=i;j<n;j++)
        cout<<" ";

        cout<<n-i+1;

        for(j=k;j>0;j--)
        cout<<" ";

        k-=2;

        if(i!=1)
        cout<<n-i+1;

        cout<<endl;
    }
    
    k=1;
    for(i=1;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        cout<<" ";

        cout<<i+3;

        for(j=k;j>0;j--)
        cout<<" ";

        k+=2;

        cout<<i+3;

        cout<<endl;
    }
    return 0;
}