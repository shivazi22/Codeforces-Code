#include<bits/stdc++.h>
using namespace std;

int n,a[250],i,ans,x,xx,y,yy,b[250];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>a[i];
        b[i]=a[i];
        }
    sort(a+1,a+n+1);

    for(i=1;i<=n;i++)
        if(b[i]==a[1])
        x=i;


    for(i=1;i<=n;i++)
        if(b[i]==a[n])
    {
        y=i;break;
    }
   // cout<<y<<endl;

    if(x<y)
    ans=-1;

    xx=n-x;
    yy=y-1;
    ans=ans+xx+yy;
    cout<<ans<<endl;


    return 0;
}
