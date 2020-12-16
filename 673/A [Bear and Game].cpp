#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0;
    int a[100];
    int n,ans,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]-temp<=15) ans=a[i];
        else {ans=temp+15;break;}
        temp=a[i];
    }
    if(i==n+1)
    {
           if(90-temp<=15) ans=90;
        else ans=temp+15;
    }
    cout<<ans<<endl;
    return 0;
}
