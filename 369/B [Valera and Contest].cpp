#include<bits/stdc++.h>
using namespace std;

long long n,k,l,r,sall,ak,t,t1,i,sk,tt,kk,l1,kk1;

int main()
{

cin>>n>>k>>l>>r>>sall>>sk;
l=sk/k;
kk=sk%k;
for(i=1;i<=k;i++)
{
    if(i<=kk)
        cout<<l+1<<" ";
    else cout<<l<<" ";
}
if(n-k>0)
{

l1=(sall-sk)/(n-k);
kk1=(sall-sk)%(n-k);
}
else
{
    l1=(sall-sk)/k;
    kk1=(sall-sk)%k;
}


for(i=1;i<=n-k;i++)
{
    if(i<=kk1)
        cout<<l1+1<<" ";
    else cout<<l1<<" ";

}






return 0;
}
