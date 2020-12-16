#include<bits/stdc++.h>
using namespace std;
long long sum,a[2005],b[2005],n,k,i,sum2;

int main()
{
    int t;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);

    for(i=n;i>=1;i-=k)
      sum+=(a[i]-1)*2;

        cout<<sum<<endl;
        return 0;
        }
