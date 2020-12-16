#include<bits/stdc++.h>
using namespace std;
long p[1000005],a[100005],x[100005],st,sum[100005],n,m,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>st;
          sum[i]=st+sum[i-1];
        }
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>x[i];
            a[i]=x[i];
        }
        sort(a+1,a+m+1);

        long k=1;

        for(i=1;i<=m;i++)
        {
            while(a[i]>sum[k])
             k++;
            p[a[i]]=k;
        }

        for(i=1;i<=m;i++)
        cout<<p[x[i]]<<endl;
return 0;
}
