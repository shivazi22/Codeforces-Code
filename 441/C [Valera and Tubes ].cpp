#include<bits/stdc++.h>
using namespace std;
long n,m,t,i,j,k=1,p,st,a[200000];
int main()
{
cin>>n>>m>>t;
for(i=1;i<=n;i++)
{
  if(i%2)
   {

    for(j=1;j<=m;j++)
    {
        a[k++]=i;
        a[k++]=j;
    }
   }
    else
        for(j=m;j;j--)
        {
            a[k++]=i;
            a[k++]=j;
        }
    }
     st=t-1;
     p=1;
     //for(i=1;i<=2*(n*m);i++)
    // cout<<a[i]<<" ";

     //cout<<endl<<endl;
     while(st--)
     {
         cout<<2<<" ";
         for(i=p;i<=p+3;i++)
         cout<<a[i]<<" ";
         cout<<endl;
         p=i;
     }
     cout<<(n*m)-(t-1)*2<<" ";
     for(k=p;k<=(2*n*m);k++)
        cout<<a[k]<<" ";
return 0;
}

