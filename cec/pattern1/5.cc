/*

     *      
    * *     
   * * *    
  * * * *   
 * * * * *  
* * * * * * 
 * * * * *  
  * * * *   
   * * *    
    * *
     *

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    for(i=1;i<=n+1;i++)
    {
        for(j=i;j<=n;j++)
        cout<<" ";

        for(j=1;j<=i;j++)
        cout<<"* ";

        cout<<endl;
    }

    for(i=n;i>0;i--)
    {
        for(j=n;j>=i;j--)
        cout<<" ";

        for(j=1;j<=i;j++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}