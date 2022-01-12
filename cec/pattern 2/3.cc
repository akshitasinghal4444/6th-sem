/*

1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,a,b,c;
    a=1; b=1;

    vector<int> t={1};

    for(i=1;i<=n;i++)
    {
        if(i==1)
        cout<<1;
        else
        {
            cout<<1<<" ";
            vector<int> t2;
            t2.push_back(1);
            for(j=1;j<t.size();j++)
            {               
                cout<<t[j]+t[j-1]<<" ";
                t2.push_back(t[j]+t[j-1]);
            }
            t2.push_back(1);
            t=t2;
            cout<<1<<" ";
        }
                
        cout<<endl;
    }

    return 0;
}