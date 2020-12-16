#include<bits/stdc++.h>
using namespace std;


long n,k,i,mina,a[105000],ans,j;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<=k;i++)
    for(j=i+k;j<=n;j+=k)
    a[i]+=a[j];

    mina=a[1];
    ans=1;
    for(i=2;i<=k;i++)
    {
        if(a[i]<mina)
        {
            mina=a[i];
            ans=i;
        }
    }
    cout<<ans<<endl;



return 0;
}
