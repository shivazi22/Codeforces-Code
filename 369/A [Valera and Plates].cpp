#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,a,c1=0,c2=0,ans=0,i;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
      {

    cin>>a;
    if(a==1) c1++;
    else c2++;
      }
      if(c1>m)
        ans=c1-m;
      else if(c1<m)
        k+=m-c1;

      //cout<<c2<<endl;

      if(c2>k)
      ans+=c2-k;

      cout<<ans<<endl;



            return 0;
}
