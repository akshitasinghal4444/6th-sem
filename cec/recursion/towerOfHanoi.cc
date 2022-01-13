#include<iostream>
using namespace std;

void toh(int n,char s,char d,char h)
{
    if(n==0)
    return ;

    toh(n-1,s,h,d);
    cout<<"move "<<n<<"th disk from "<<s<<" to "<<d<<endl;
    toh(n-1,h,d,s);
}

int main()
{
    int n;
    cin>> n;

    toh(n,'a','b','c');
}