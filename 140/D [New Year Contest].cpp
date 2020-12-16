#include<bits/stdc++.h>
using namespace std;
int sum=10,cnt,i,st[200],n,ans;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>st[i];
    sort(st+1,st+1+n);
    for(i=1;i<=n;i++)
    {
        sum+=st[i];
        if(sum<=720) cnt++;
    if(sum>360&&sum<=720)
    {
        ans+=(sum-360);
    }
    }
    if(sum<=360) cout<<n<<" "<<0<<endl;
    else cout<<cnt<<" " <<ans<<endl;

    return 0;




}
