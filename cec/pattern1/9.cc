/*

E       E 
 D     D
  C   C
   B B
    A  

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,k=7;
    char ch='E';

    for(i=n;i>0;i--,ch--)
    {
        for(j=i;j<n;j++)
        cout<<" ";

        cout<<ch;

        for(j=k;j>0;j--)
        cout<<" ";

        k-=2;

        if(i!=1)
        cout<<ch;

        cout<<endl;
    }
    return 0;
}