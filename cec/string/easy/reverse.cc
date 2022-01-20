#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int i,j,n=s.length();

    for(i=0,j=n-1;i<j;i++,j--)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
    }

    cout<<s;
    return 0;
}