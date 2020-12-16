#include<bits/stdc++.h>
using namespace std;
long long n,k,h,sum,a[100005],val,i;
int main()
{
    cin>>n>>h>>k;
    for( i=1;i<=n;i++)
    cin>>a[i];
    long long cnt=0;
   long long sum=0,presum;
   for(int i=1;i<=n;i++)
    {
       presum=sum;
       sum+=a[i];
       if(sum<=h)
       {
           cnt+=sum/k;
           sum=sum%k;
       }
       if(sum>h&&presum>0)
       {
           cnt++;
           sum-=presum;
           cnt+=sum/k;
           sum=sum%k;
       }
    }
    if(sum%k) cnt++;
    cout<<cnt<<endl;

    return 0;
}
