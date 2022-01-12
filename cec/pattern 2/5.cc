/*

    *******
    **   **
    * * * *
    *  *  *
    * * * *
    **   **
    *******

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=n-4;

    for(i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;

    for(i=1;i<=n/2;i++)
    {
        cout<<"*";

        for(j=1;j<i;j++)
        cout<<" ";

        cout<<"*";

        for(j=1;j<=k;j++)
        cout<<" ";

        if(i!=n/2)
        cout<<"*";

        for(j=1;j<i;j++)
        cout<<" ";

        cout<<"*";
        k-=2;
        cout<<endl;
    }
    k=1;
    for(i=n/2-1;i>=1;i--)
    {
        cout<<"*";

        for(j=1;j<i;j++)
        cout<<" ";

        cout<<"*";

        for(j=1;j<=k;j++)
        cout<<" ";

        cout<<"*";

        for(j=1;j<i;j++)
        cout<<" ";

        cout<<"*";

        cout<<endl;
        k+=2;
    }
    for(i=1;i<=n;i++)
    {
        cout<<"*";
    }

    return 0;
}