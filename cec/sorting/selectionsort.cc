#include<iostream>
using namespace std;

void selection_sort(int *a,int n)
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
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    int i;
    for(i=0;i<n;i++)
    cin>>a[i];

    selection_sort(a,n);


    for(i=0;i<n;i++)
    cout<<a[i]<<" ";


    return 0;
}