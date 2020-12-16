#include<bits/stdc++.h>
using namespace std;
int cnt[5005];
int main()
{
    int n,k;
    cin>>n>>k;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(n>4&&k>=(n+1))
    {
        cout<<a<<" "<<c<<" ";
        cnt[a]=1;cnt[b]=1; cnt[c]=1;cnt[d]=1;
        for(int i=1;i<=n;i++)
            if(!cnt[i]) cout<<i<<" ";
        cout<<d<<" "<<b<<" ";
        cout<<endl;

         cout<<c<<" "<<a<<" ";

        for(int i=1;i<=n;i++)
            if(!cnt[i]) cout<<i<<" ";
        cout<<b<<" "<<d<<" ";
        cout<<endl;

    }
    else cout<<-1<<endl;
    return 0;
}
