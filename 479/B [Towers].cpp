#include <bits/stdc++.h>
using namespace std;
int j,n,k,maxi,mina,st[200],a[20000],b[20000],i,pos1,pos2,cc=0;
int main()
{
   cin>>n>>k;
   for(i=1;i<=n;i++) cin>>st[i];
   int cnt=0;
   for(i=1;i<=k;i++)
   {
       mina=100000;maxi=-100000;
       for(j=1;j<=n;j++)
       {
           if(st[j]>maxi) {maxi=st[j];pos1=j;}
           if(st[j]<mina) {mina=st[j];pos2=j;}
       }
       if(maxi==mina||abs(maxi-mina)==1) break;

       else
       {
           cnt++;
           st[pos1]--;
           st[pos2]++;
           a[cnt]=pos1;
           b[cnt]=pos2;
       }
   }
    mina=100000;maxi=-100000;
     for(j=1;j<=n;j++)
       {
           if(st[j]>maxi) {maxi=st[j];pos1=j;}
           if(st[j]<mina) {mina=st[j];pos2=j;}
       }

   cout<<(maxi-mina)<<" "<<cnt<<endl;
   for(i=1;i<=cnt;i++)
    cout<<a[i]<<" "<<b[i]<<endl;
    return 0;
}
