#include<bits/stdc++.h>
using namespace std;
int st[2500],st2[2500],st3[2500],n,cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>st[i];
        st2[i]=st[i];
    }
    sort(st2+1,st2+n+1);
    cnt=1;
    st3[st2[n]]=1;
    for(int i=n-1;i>=1;i--)
    {
        cnt++;
        if(st2[i]<st2[i+1])
        st3[st2[i]]=cnt;
    }
    for(int i=1;i<=n;i++)
        cout<<st3[st[i]]<<" ";

    return 0;
}
