#include<bits/stdc++.h>
using namespace std;

long n,m,k,cnt2,i,j,a[2000];
int main()
{
    long cnt,nn;
    cin>>n>>m>>k;
    for(i=1;i<=m+1;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
    {
        nn=a[m+1];
        cnt=0;
        for(j=1;j<=n;j++)
        {
            if(a[i]%2==0&&nn%2!=0)
            cnt++;
            else  if(a[i]%2!=0&&nn%2==0)
                cnt++;
            a[i]=a[i]/2;
            nn=nn/2;
        }
        if(cnt<=k)
            cnt2++;
    }
    cout<<cnt2<<endl;
    return 0;
}

