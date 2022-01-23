#include<iostream>
using namespace std;

string lpss(string s)
{
    int n=s.length();
    int i,l,r;
    string ans="";
    int len=0;

    for(i=0;i<n;i++)
    {
        len=1;
        l=i-1;
        r=i+1;
        while(l>=0 && r<=n-1 && s[l]==s[r])
        {
            len+=2;
            l--;
            r++;
        }
            
        if(len>ans.length())
            ans=s.substr(l+1,len);


        len=0;
        l=i;
        r=i+1;
        while(l>=0 && r<=n-1 && s[l]==s[r])
        {
            len+=2;
            l--;
            r++;
        }
        if(len>ans.length())
            ans=s.substr(l+1,len);

    }

    return ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<lpss(s);

    return 0;
}