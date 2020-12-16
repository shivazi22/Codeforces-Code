#include<bits/stdc++.h>
using namespace std;
int n,m,i,a[200],t,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>t;
        for(j=t;j<=n;j++)
        if(a[j]==0)
            a[j]=t;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
