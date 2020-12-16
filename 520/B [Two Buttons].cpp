#include<bits/stdc++.h>
using namespace std;
char S[200];
long n,m,cnt,l1,l2;
int main()
{
    cin>>n>>m;
    if(n>=m)
       {
           cout<<n-m<<endl;
           return 0;

       }
       else
       {
           while(m>n)
           {
               if(m%2)
                m++;
               else
                m=(m/2);

                 cnt++;

                if(n>m)
                {
                    cnt+=abs(n-m);
                    n=m=0;
                }


           }
           cout<<cnt<<endl;
       }


}





