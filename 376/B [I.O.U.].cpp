#include<bits/stdc++.h>
using namespace std;
long long n,m,i,sum,a,b,c,aa[200];
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        aa[a]+=c;
        aa[b]=aa[b]-c;
        }
        for(i=1;i<=n;i++)
        {
            if(aa[i]<0)
                sum+=aa[i]*-1;
        }
        cout<<sum<<endl;
}
