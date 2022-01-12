/*

5
54
543
5432
54321
543210
54321
5432
543
54
5

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    for(i=1;i<=n+1;i++)
    {
        for(j=n;j>=n-i+1;j--)
        cout<<j;

        cout<<endl;
    }

    for(i=n;i>=1;i--)
    {
        for(j=n;j>=n-i+1;j--)
        cout<<j;

        cout<<endl;
    }
    return 0;
}