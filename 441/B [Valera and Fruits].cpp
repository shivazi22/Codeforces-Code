#include<bits/stdc++.h>
using namespace std;
long sum,maxi=-100,a[5000],i,j,v,t2,t1,n,tem;
map<int,int >aa;
map<int,int>::iterator it;
int main()
{

cin>>n>>v;
for(i=1;i<=n;i++)
{
    cin>>t1>>t2;
    aa[t1] +=t2;
    maxi=max(maxi,t1);
}
for(it=aa.begin();it!=aa.end();it++)
{
     t1=  it->first;
   t2=it->second;

    a[t1]+=t2;
    if(a[t1]>v)
    {
        tem=a[t1]-v;
        a[t1]=v;
        a[t1+1]+=tem;
        if(a[t1+1]>v)
            a[t1+1]=v;
            //cout<<a[t1]<<" "<<a[t1+1]
            }
}

for(i=1;i<=maxi+1;i++)
    {sum+=a[i];
   // cout<<a[i]<<" ";
   }
cout<<sum<<endl;
return 0;
}

