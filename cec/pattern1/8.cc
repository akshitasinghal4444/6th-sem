/*

    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=-1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        cout<<" ";

        cout<<i;

        for(j=k;j>0;j--)
        cout<<" ";

        k+=2;

        if(i!=1)
        cout<<i;

        cout<<endl;
    }

    k=5;
    for(i=n-1;i>0;i--)
    {
        for(j=i;j<n;j++)
        cout<<" ";

        cout<<i;

        for(j=k;j>0;j--)
        cout<<" ";

        k-=2;

        if(i!=1)
        cout<<i;

        cout<<endl;
    }
    return 0;
}