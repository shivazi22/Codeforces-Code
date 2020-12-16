#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,mm,nn;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    nn=n;mm=m;

     if(n>m)
    {

        for(;;)
        {
            if(n>0)
           {

           printf("B");
           cnt++;
            n--;
           }
           if(m>0)
           {
               printf("G");
               cnt++;
               m--;
           }


           if(cnt==nn+mm)
            break;

        }
    }
    if(n<=m)
    {

        for(;;)
        {
            if(m>0)
           {

           printf("G");
            m--;
            cnt++;
           }
           if(n>0)
           {
               printf("B");
               n--;
               cnt++;
           }


           if(cnt==nn+mm)
            break;

        }
    }
   return 0;

}
