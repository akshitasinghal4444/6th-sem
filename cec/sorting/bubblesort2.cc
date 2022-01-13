#include<iostream>
using namespace std;

void bubble_sort(int *a,int n,int k)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
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

    bubble_sort(a,n,k);

    return 0;
}