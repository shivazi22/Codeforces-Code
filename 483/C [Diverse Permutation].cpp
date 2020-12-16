#include<bits/stdc++.h>
using namespace std;
long long n,p,k,cnt,nn,i;

int main()
{
    cin>>n>>k;
    nn=n;
    if(k%2==0)
    {

        cnt=k/2;
        long p=n-cnt;
        long pp=cnt;
        long g=1;
        for(i=1;i<=n;i++)
        {
            if(i%2==0&&cnt!=0)
            {
                cout<<nn<<" ";
                nn--;
                cnt--;
                continue;
            }
            if(i<pp*2)
               {
                   cout<<g<<" ";
                   g++;
                   continue;
               }
            cout<<p<<" ";
            p--;
        }
    }
    else
    {
         cnt=k/2;
        long p=1;

        for(i=1;i<=n;i++)
        {
            if(i%2==0&&cnt!=0)
            {
                cout<<nn<<" ";
                nn--;
                cnt--;
                continue;
            }
            cout<<p<<" ";
            p++;
        }
    }


    return 0;

}

