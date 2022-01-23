#include<iostream>
using namespace std;

int findSubstring(string s,int n)
{
    int i,ans=0,st=0;
    int f[26];

    for(i=0;i<26;i++)
    f[i]=-1;

    for(i=0;i<n;i++)
    {
        int in=s[i]-'a';

        if(f[in]==-1 || f[in]<st)
        f[in]=i;
        else
        {
            ans=max(i-st,ans);
            st=f[in]+1;
            f[in]=i;
        }
    }
    ans=max(i-st,ans);
    return ans;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();

    cout<<findSubstring(s,n);

    return 0;
}