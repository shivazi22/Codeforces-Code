#include<bits/stdc++.h>
using namespace std;
int cnt=0,aa[500],n,a;

int main()
{
   scanf("%d%d",&n,&a);
   for(int i=1;i<=n;i++)
   {
     scanf("%d",&aa[i]);
     if(aa[i]) cnt++;
   }
   if(a>n) {printf("%d\n",0);fflush(stdout);}
   else
   {
       cnt=0;
       if(aa[a]) cnt++;
       int i,j;
   i=j=a;
   for(;;)
   {
       i--;
       j++;
       if(i<1&&j>n) break;
       if(i<1)
       {
           if(aa[j]) cnt++;
       }
       else if(j>n)
       {
           if(aa[i]) cnt++;
       }
       else {
        if(aa[i]==1&&aa[j]==1) cnt+=2;
       }

   }
   printf("%d\n",cnt);fflush(stdout);
   }
   //fflush(stdout);
}
