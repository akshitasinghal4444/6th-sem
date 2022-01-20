#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int f[256]={0};
    int i,n=s.length();

    for(i=0;i<n;i++)
    f[s[i]]++;

    int mx=0;
    for(i=0;i<256;i++)
    {
        if(f[mx]<f[i])
        mx=i;
    }

    cout<<(char)mx;
    return 0;
}