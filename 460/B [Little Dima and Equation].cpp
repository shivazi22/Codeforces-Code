#include<bits/stdc++.h>
using namespace std;

long a,b,c,i,j,cnt,tt,k;
long ans[500];
long long sum2;

int main()
{
    cin>>a>>b>>c;
    for(i=1;i<=81;i++)
    {
        tt=0;
        long long sum=1;
        for(j=1;j<=a;j++)
        sum=sum*i;
        sum=b*sum+c;
        sum2=sum;
           while(sum2!=0)
           {
               tt+=sum2%10;
               sum2/=10;
           }

        if(sum>=1&&sum<=999999999&&tt==i)
        {

            cnt++;
            ans[k++]=sum;
        }

    }
    cout<<cnt<<endl;
    for(i=0;i<cnt;i++)
    cout<<ans[i]<<" ";
    return 0;
}
