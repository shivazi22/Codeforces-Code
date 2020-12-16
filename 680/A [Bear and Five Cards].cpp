#include<bits/stdc++.h>
using namespace std;
int cnt[200];

int main()
{
    int sum=0,a[20];
   for(int i=1;i<=5;i++)
   {
       scanf("%d",&a[i]);
       sum+=a[i];
       cnt[a[i]]++;
   }
   int sum2=0,sum3=0;
   for(int i=1;i<=102;i++)
   {
       if(cnt[i]==2)
        sum2=i*2;
       if(cnt[i]>=3)
        sum3=i*3;
   }
   sum-=max(sum2,sum3);
   printf("%d\n",sum);
   fflush(stdout);
}
