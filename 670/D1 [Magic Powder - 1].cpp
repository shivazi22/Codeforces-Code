#include<bits/stdc++.h>
using namespace std;
int value[1004],a[1005];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int mina=2000;
    for(int j=1;j<=n;j++)
    {
        cin>>value[j];
        int t=value[j]/a[j];
        mina=min(mina,t);
    }
    int ans=0;
    ans+=mina;
    for(int i=1;i<=n;i++)
    {
        value[i]-=a[i]*mina;
    }
    mina =0;
    for(;;)
    {
        for(int i=1;i<=n;i++)
        if(value[i]<a[i])
        mina+=a[i]-value[i];

        if(mina>k) break;
        else {
            ans++;
            for(int i=1;i<=n;i++)
            {
                if(value[i]>a[i]) value[i]-=a[i];
                else value[i]=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
