#include<bits/stdc++.h>
using namespace std;
char str[105][105];
int n,m,i,j,k,b[105];
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
        int p=0;
    for(j=0;j<m;j++)
    {
       int maxi=0;
        for(k=0;k<n;k++)
            maxi=max(str[k][j]-48,maxi);
            b[p++]=maxi;
    }
    int ans=0;
    for(j=0;j<n;j++)
    {
        int cnt=0;
        for(k=0;k<m;k++)
            if(str[j][k]-48==b[k])
            cnt++;
        if(cnt>0) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
