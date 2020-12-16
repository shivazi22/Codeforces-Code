#include<bits/stdc++.h>
using namespace std;
long a[1005],l,i,maxi,t,n;
int main()
{
    cin>>n>>l;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    sort(a+1,a+n+1);
    maxi=-10;
    for(i=1;i<n;i++)
    {
        t=a[i+1]-a[i];
        if(t>maxi)
            maxi=t;
    }
   t=max(a[1]-0,l-a[n]);
   double tk=(double)t;
   double tt=(double)(maxi/2.00000);
   // printf("%lf",tk);
   //printf("%lf",tt);
   if((double)tk>tt)
   printf("%lf",tk);
   else  printf("%lf",tt);
   return 0;
   }
