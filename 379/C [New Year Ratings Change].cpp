#include<bits/stdc++.h>
using namespace std;
const int mx=300000+10;
pair<int,int>a[mx];
int res[mx],n,i,st,cnt;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>st;
        a[i].first=st;
        a[i].second=i;
    }
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        cnt=max(a[i].first,cnt+1);
        res[a[i].second]=cnt;
    }
    for(i=0;i<n;i++)
    cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}
