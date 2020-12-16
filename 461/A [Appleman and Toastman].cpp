#include<bits/stdc++.h>
using namespace std;
long long n,a[300005],sum,sum2,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>a[i];
        sum2+=a[i];}
    sort(a+1,a+n+1);
    if(n==1)
        cout<<a[1]<<endl;
    else if(n==2)
        cout<<2*(a[1]+a[2])<<endl;
    else
    {

    long k=1;
    for(i=2;i<=n-1;i++)
    sum+=a[i]*k++;

    sum+=2*sum2+a[n]*(k-1);

    cout<<sum<<endl;
    }
}
