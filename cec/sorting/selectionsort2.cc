#include<iostream>
using namespace std;

void selection_sort(int *a,int n,int k)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        if(i==k-1)
        {
            for(j=0;j<n;j++)
            cout<<a[j]<<" ";
        }
    }
}

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];

    selection_sort(a,n,k);

    return 0;
}