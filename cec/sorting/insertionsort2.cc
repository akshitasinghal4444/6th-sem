#include<iostream>
using namespace std;

void insertion_sort(int *a,int n,int k)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        
        a[j+1]=key;

        if(i==k)
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

    insertion_sort(a,n,k);




    return 0;
}