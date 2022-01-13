/*
1 2 3 6 9 18 27 54........
*/

#include<iostream>
using namespace std;

void print(int n,int i)
{
        int j;
        for(j=1;j<3 && n!=0;j++,n--)
        cout<<i*j<<" ";

        if(n!=0)
        print(n,i*j);
}

int main()
{
    int n;
    cin>>n;

    print(n,1);
    return 0;
}