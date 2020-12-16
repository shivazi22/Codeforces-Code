#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,n1,n2,ans,r,x,x1,y,y1;
    cin>>r>>x>>y>>x1>>y1;
     n=(abs(x1-x))*(abs(x1-x))+(abs(y1-y))*(abs(y1-y));
    n2 =(long long )sqrt(n);
    if(n2*n2!=n)
        n2++;
        ans=n2/(2*r);
        if((n2%(2*r))!=0)
            ans++;
  cout<<ans<<endl;
  return 0;
}





