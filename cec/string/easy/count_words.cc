#include<iostream>
#include<string>
using namespace std;

int count_word(string &s)
{
    int i,n=s.length(),c=0;
    for(i=0;i<n;i++)
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t' || i==n-1)
        {
            c++;
            while(i<n && (s[i]==' ' || s[i]=='\n' || s[i]=='\t' || i==n-1))
            i++;

            i--;
        }
    }
    return c;
}

int main()
{
    string s;
    getline(cin,s);

    cout<<count_word(s);

    return 0;
}