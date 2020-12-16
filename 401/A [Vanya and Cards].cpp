#include<bits/stdc++.h>
using namespace std;
int  n,x,i,sum,ans,a;
int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum<0) sum*=-1;
    ans=sum/x;
    if(sum%x)
        ans++;
    cout<<ans<<endl;
    return 0;
}
