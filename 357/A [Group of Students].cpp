#include<bits/stdc++.h>
using namespace std;
long sum[200],coun=0,c=0;
int main()
{
    long n,a[200],i,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        cin>>x>>y;


    for(i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }

    for(i=1;i<=n;i++)
    {
        if(sum[i]>=x&&sum[i]<=y)
        {
            long k=sum[n]-sum[i];
            if(k>=x&&k<=y)
            {
                cout<<i+1<<endl;
                c=1;
                break;
            }
        }
    }

    if(c==0)
        cout<<0<<endl;




    return 0;
}
