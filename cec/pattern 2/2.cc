/*

1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,a,b,c;
    a=1; b=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
                
        cout<<endl;
    }

    return 0;
}