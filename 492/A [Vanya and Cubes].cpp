#include<bits/stdc++.h>
using namespace std;
long a[10005],n,cnt,sum,i;
int main()
{
    cin>>n;
    for(i=1;i<=1000;i++)
    {
        a[i]=((i)*(i+1))/2;
    }
    for(i=1;i<=1000;i++)
    {
        sum+=a[i];
        if(sum<=n)
        cnt++;
        else break;

    }
    cout<<cnt<<endl;

   return 0;
   }
