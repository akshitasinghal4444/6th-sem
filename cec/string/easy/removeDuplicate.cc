#include<iostream>
using namespace std;

int main()
{
    string s,t="";
    cin>>s;

    bool f[256]={0};
    int i,n=s.length();

    for(i=0;i<n;i++)
    {
        if(!f[s[i]])
        {
            t+=s[i];
            f[s[i]]=1;
        }
    }
    s=t;

    cout<<s;
    return 0;
}