#include<bits/stdc++.h>
using namespace std;
long n,t,c,i,a[200005],st,cnt;
int main()
{
    cin>>n>>t>>c;
    for(i=1;i<=n;i++)
    cin>>a[i];
   long  k=1;
   for(i=1;i<c;i++)
    if(a[i]>t) st+=-1;
  for(i= c;i<=n;i++)
  {

      if(a[i]>t) st+=-1;
       if(st==0) cnt++;
      if(a[k++]>t) st+=1;

  }
cout<<cnt<<endl;
return 0;
}
