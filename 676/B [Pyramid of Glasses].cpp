#include<bits/stdc++.h>
using namespace std;
long double dp[15][15];
int main()
{
    int n,t;
    cin>>n>>t;
    dp[1][1]=t;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(dp[i][j]+1e-12>=1) ans++;
            long double r=max(dp[i][j]-1,(long double)0);
            dp[i+1][j]+=r*0.5;
            dp[i+1][j+1]+=r*0.5;
        }
    }
    cout<<ans<<endl;

    return 0;
}
