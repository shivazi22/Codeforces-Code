#include<bits/stdc++.h>
using namespace std;
long st1[100005],st2[100005],st3[100005],i,n,cc;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st1[i];
    }
    sort(st1,st1+n+1);

     for(i=1;i<=n-1;i++)
    {
        cin>>st2[i];
    }
     sort(st2,st2+n);

        for(i=1;i<=n-2;i++)
    {
        cin>>st3[i];
    }
     sort(st3,st3+n-1);

     for(i=1;i<=n-1;i++)
     {
         if(st1[i]!=st2[i])
         {
             cout<<st1[i]<<endl;
             cc=1;
             break;

         }

     }
     if(cc==0)
        cout<<st1[n]<<endl;

     int cc=0;

     for(i=1;i<=n-2;i++)
     {
         if(st2[i]!=st3[i])
         {
             cout<<st2[i]<<endl;
             cc=1;
             break;

         }

     }
     if(cc==0)
        cout<<st2[n-1]<<endl;

    }
