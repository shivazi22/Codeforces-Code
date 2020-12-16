#include<bits/stdc++.h>
using namespace std;

int ar[20];

int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++) cin>>ar[i];
    int res=0;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0,mx=0,mn=111111111;
        for(int j=0;j<n;j++)
        {
            if( i & (1<<j) )
            {
                sum+=ar[j];
                mx=max(mx,ar[j]);
                mn=min(mn,ar[j]);
            }
        }
        if(sum>=l && sum<=r && (mx-mn)>=x)
            res++;
    }
    cout<<res<<endl;
    return 0;
}
















