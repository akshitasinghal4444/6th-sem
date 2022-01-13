#include<iostream>
using namespace std;

void insertion_sort(int *a,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int k=a[i];
        j=i-1;

        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        
        a[j+1]=k;
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

    insertion_sort(a,n);


    for(i=0;i<n;i++)
    cout<<a[i]<<" ";


    return 0;
}