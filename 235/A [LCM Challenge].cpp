#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b,long long c)
{
    long long lc=__gcd(a,b);
    lc=a*b/lc;
    return lc*c/__gcd(lc,c);
}
int main()
{
    unsigned long long  n;
    cin>>n;
    if(n<3)
        cout<<n<<endl;
    else
    {
        if(n%2==0)
        {
            long long t=n-50;
            if(t<1) t=1;
            long long maxi=(n-1)*(n-2)*(n-3);
            for(int i=t;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    for(int k=j+1;k<=n;k++)
                    {
                         if((lcm(i,j,k))>maxi)
                         {maxi=lcm(i,j,k); //cout<<i<<"  "<<j<<" "<<k<<endl;}
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
        else cout<<(n*(n-1)*(n-2))<<endl;
    }
}
