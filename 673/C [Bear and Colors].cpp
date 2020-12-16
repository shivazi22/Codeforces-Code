#include<bits/stdc++.h>
using namespace std;
int ans[5005],cnt[5005],a[5005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        memset(cnt,0,sizeof(cnt));
        int best=a[i];
        ans[best]++;
        cnt[best]++;
        for(int j=i+1;j<=n;j++)
        {
            cnt[a[j]]++;
            if(cnt[best]<cnt[a[j]]) best=a[j];
            else if(cnt[best]==cnt[a[j]]&&a[j]<best)
                best=a[j];
            ans[best]++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
