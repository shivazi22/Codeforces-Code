#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    long long ans=0;
     i=1;
    while(1)
    {
        if(a[i]==1)
            {ans=1;break;}
        if(i==n) break;
        i++;
    }
    int cnt=0;
    for(int j=i+1;j<=n;j++)
    {
      if(a[j]==0) cnt++;
     else {ans*=(cnt+1);cnt=0;}
    }
    cout<<ans<<endl;
    return 0;
}
