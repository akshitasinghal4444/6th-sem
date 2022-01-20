#include<iostream>
using namespace std;

void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}

void print_permute(string s,int l,int r)
{
    if(l==r)
    cout<<s<<endl;
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(&s[l],&s[i]);
            print_permute(s,l+1,r);
            swap(&s[l],&s[i]);
        }
    }
}

int main()
{
    string s;
    cin>>s;

    int n=s.length();

    print_permute(s,0,n-1);

    return 0;
}