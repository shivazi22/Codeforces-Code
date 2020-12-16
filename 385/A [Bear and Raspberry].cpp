#include<bits/stdc++.h>
using namespace std;
int n,c,i,a[200],tem,maxa;
int main()
{
    cin>>n>>c;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=1;i<=n-1;i++)
    {
        if(a[i]>a[i+1])
            tem=a[i]-a[i+1]-c;
        if(tem>maxa)
            maxa=tem;
    }
    cout<<maxa<<endl;
}

