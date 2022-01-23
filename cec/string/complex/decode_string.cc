#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string decode_string(string s)
{
    int n=s.length();
    stack<char> st1;
    stack<int> st2;
    int i;

    for(i=0;i<n;i++)
    {
        if(s[i]=='[' || (s[i]>='a' && s[i]<='z'))
        st1.push(s[i]);
        else if(s[i]>='0' && s[i]<='9')
        {
            int t=0;
            while(i<n && s[i]>='0' && s[i]<='9')
            {
                t=t*10+(s[i]-'0');
                i++;
            }
            i--;
            st2.push(t);
        }
        else if(s[i]==']')
        {
            int x;
            string t="";
            x=st2.top();
            st2.pop();

            while(st1.top()!='[')
            {
                t+=st1.top();
                st1.pop();
            }
            st1.pop();

            while(x--)
            {
                int j;
                for(j=t.length()-1;j>=0;j--)
                st1.push(t[j]);
            }
        }
    }

    string ans="";
    while(!st1.empty())
    {
        ans+=st1.top();
        st1.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<decode_string(s);
    return 0;
}