#include<bits/stdc++.h>
using namespace std;
long a[100005],n,k,t,t2;
int main()
{
    cin>>n>>k;
    for(long i=1;i<=n;i++)
        cin>>a[i];
        if(k>n||k==n) cout<<a[n]<<endl;
        else {
            t=n-k;
            t2=t;
            for(long i=t+1;i<=2*t;i++)
            {
                a[i]=a[i]+a[t2--];
                //cout<<a[i]<<" ";
            }
            long maxi=a[t+1];
            for(long i=t+1;i<=n;i++)
                maxi=max(maxi,a[i]);
                cout<<maxi<<endl;

        }

    return 0;
}
