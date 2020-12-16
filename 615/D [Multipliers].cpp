#include<bits/stdc++.h>
using namespace std;
int maxi=1000000007;
map<int,int>mp;
long long  bigmod(long long a,long long b,int maxi)
{
    if(b==0) return 1%maxi;
    long long  x=bigmod(a,b/2,maxi);
    x=(x*x)%maxi;
    if(b%2==1) x=(x*a)%maxi;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    long long ans=1,d=1;
    for(auto a:mp)
    {
       long long  cnt=a.second;
       long long cnt2=a.first;
       long long st=bigmod(cnt2,cnt*(cnt+1)/2,maxi);
       ans=bigmod(ans,(cnt+1),maxi)*bigmod(st,d,maxi)%maxi;
       d=(d*(cnt+1))%(maxi-1);
    }
    cout<<ans<<endl;
    return 0;
}
