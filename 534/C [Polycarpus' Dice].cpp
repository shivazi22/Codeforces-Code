#include<bits/stdc++.h>
using namespace std;
long long n,a,sum,i,d[200005];
int main()
{
    cin>>n>>a;
    for(i=1;i<=n;i++)
    {cin>>d[i];sum+=d[i];}
    for(i=1;i<=n;i++)
    {
    long long maximum=a-(n-1);
    if(d[i]<maximum) maximum=d[i];
    long long minimum=d[i]-(sum-a);
    if(minimum<1) minimum=1;
    cout<<minimum-1+d[i]-maximum<<" ";
    }
    return 0;
}


