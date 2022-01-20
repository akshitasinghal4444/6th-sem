#include<iostream>
#include<string.h>
using namespace std;

bool is_palindrome(string s,int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        return 0;
    }
    return 1;
}

int main()
{
    string s,t="";
    getline(cin,s);

    int i,n=s.length();

    for(i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        t+=(s[i]+32);
        else if(s[i]>='a' && s[i]<='z')
        t+=s[i];
    }

    if(is_palindrome(t,t.length()))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}