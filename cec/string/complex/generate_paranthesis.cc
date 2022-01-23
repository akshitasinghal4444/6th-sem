#include<iostream>
using namespace std;

void generate_parenthesis(string s,int n,int o,int c)
{
    if(c==n)
    {
        cout<<s<<endl;
        return;
    }

    if(o<n)
    generate_parenthesis(s+'(',n,o+1,c);

    if(o>c)
    generate_parenthesis(s+')',n,o,c+1);
}

int main()
{
    int n;
    cin>>n;

    generate_parenthesis("",n,0,0);

    return 0;
}