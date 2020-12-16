#include<bits/stdc++.h>
using namespace std;
long st[1005][1005]={0},n,m,k,i,a,b,ans,j;
int main()
{
    cin>>n>>m>>k;
    for(i=1;i<=k;i++)
    {
        cin>>a>>b;

        st[a][b]=1;

        if(st[a+1][b]==1&&st[a][b+1]==1&&st[a+1][b+1]==1)
        ans=i;
        else if(st[a+1][b]==1&&st[a+1][b-1]==1&&st[a][b-1]==1)
            ans=i;
        else if(st[a][b-1]==1&&st[a-1][b-1]==1&&st[a-1][b]==1)
            ans=i;
        else if(st[a-1][b]==1&&st[a-1][b+1]==1&&st[a][b+1]==1)
            ans=i;
        if(ans>0)
        {
            for(j=i+1;j<=k;j++)
            {
                cin>>a>>b;
            }
            cout<<ans<<endl;
            return 0;
        }

    }
     cout<<0<<endl;
     return 0;

}
