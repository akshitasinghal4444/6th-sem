#include<iostream>
using namespace std;

string lcp(string a[],int n)
{
    string ans="";
    for(int i=0;i<a[0].length();i++)
    {
        char t=a[0][i];
        for(int j=1;j<n;j++)
        {
            if(i>=a[j].length())
            return ans;

            if(a[j][i]!=t)
            return ans;
        }
        ans+=t;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    string a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<lcp(a,n);

    return 0;
}