#include<bits/stdc++.h>
using namespace std;
long sum,a[4000],n,m,i,t1,t2;
 int main()
 {
     cin>>n>>m;
     for(i=1;i<=n;i++)
        cin>>a[i];
     for(i=1;i<=m;i++)
     {
         cin>>t1>>t2;
         sum+=min(a[t1],a[t2]);
     }
     cout<<sum<<endl;
     return 0;
 }
