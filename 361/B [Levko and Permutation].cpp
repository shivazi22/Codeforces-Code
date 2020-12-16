#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,k,i,j;
    cin>>n>>k;
    if((n-1)>=k)
    {
         if((n-1)==k)
         {
             for(i=1;i<=n;i++)
            cout<<i<<" ";
         }
            else
            {

                if(k==0)
                {
                       for(j=1;j<=n-1;j++)
                        cout<<j+1<<" ";
                        cout<<1<<" ";
                }
                else
                {
                     cout<<k+2<<" ";

                for(i=2;i<=k+1;i++)
                    cout<<i<<" ";
                    for(j=k+2;j<=n-1;j++)
                        cout<<j+1<<" ";

                         cout<<1<<" ";
                }

            }
    }
    else
    cout<<-1<<endl;
    return 0;

}
