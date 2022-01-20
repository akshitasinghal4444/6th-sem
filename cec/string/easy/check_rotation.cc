#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s;
    cin>>t;

    s+=s;
    if(s.find(t)<s.length())
    cout<<"yes";
    else
    cout<<"no";
    
    return 0;
}