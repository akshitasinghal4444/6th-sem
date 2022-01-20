#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    if(s.length()!=t.length())
    {
        cout<<"no";
        return 0;
    }

    int f[256]={0};
    int i,n=s.length();

    for(i=0;i<n;i++)
    {
        f[s[i]]++;
        f[t[i]]--;
    }
    
    for(i=0;i<256;i++)
    {
        if(f[i]!=0)
        {
            cout<<"no";
            return 0;
        }
    }

    cout<<"yes";
    return 0;
}