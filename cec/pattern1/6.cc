/*

    1
   321
  54321
 7654321
987654321

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        cout<<" ";

        for(j=k;j>=1;j--)
        cout<<j;

        k+=2;
        cout<<endl;
    }
    return 0;
}