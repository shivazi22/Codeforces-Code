#include<bits/stdc++.h>
using namespace std;

long long n,i,t,a[20005],maxi=-200000000000,j,k;

int main()
{
    long long sum;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    int l=n/3;
    if(n==4) l=1;
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                sum=0;
                for(k=j;k<=n;k+=i)
                {
                    sum+=a[k];
                }
                //cout<<sum<<endl;
                if(sum>maxi)
                    maxi=sum;
            }
        }
    }
   cout<<maxi<<endl;
    return 0;
}
