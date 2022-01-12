/*

 *
  **
   ***
    ****
     *****
    ****
   ***
  **
 *

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<" ";

        for(j=1;j<=i;j++)
        cout<<"*";
                
        cout<<endl;
    }

    for(i=i-2;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        cout<<" ";

        for(j=1;j<=i;j++)
        cout<<"*";
                
        cout<<endl;
    }
    return 0;
}