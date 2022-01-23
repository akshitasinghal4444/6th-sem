#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
    string t1,t2;
    t1=to_string(a);
    t2=to_string(b);

    return (t1+t2)>(t2+t1);
}

string largest_no(int *a,int n)
{
    string ans="";
    int i;
    sort(a,a+n,comp);

    for(i=0;i<n;i++)
    {
        if(ans.length()==1 && ans=="0" && a[i]==0)
        ;
        else
        ans+=to_string(a[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<largest_no(a,n);
    return 0;
}