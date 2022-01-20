#include<iostream>
#include<string>
using namespace std;

void reverse(string &s,int l,int r)
{
    for(int i=l,j=r;i<j;i++,j--)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
}

void reverse_word(string &s)
{
    int i,n=s.length(),st=-1;
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            reverse(s,st+1,i-1);
            st=i;
        }
        else if(i==n-1)
        {
            reverse(s,st+1,i);
            st=i;
        }
    }

    reverse(s,0,n-1);
}

int main()
{
    string s;
    getline(cin,s);

    reverse_word(s);

    cout<<s;
    return 0;
}