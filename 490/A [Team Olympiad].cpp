#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5050],c[5050];
int i,n,st[5050],ans,k,r;
int main()
{
    cin>>n;
    int p=k=r=1;
    for(i=1;i<=n;i++)
        {
        cin>>st[i];
        if(st[i]==1)
            a[p++]=i;
        else if(st[i]==2)
            b[k++]=i;
        else c[r++]=i;

        }
        ans=min(min(p-1,k-1),r-1);
        cout<<ans<<endl;
        for(i=1;i<=ans;i++)
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;

    return 0;
}
