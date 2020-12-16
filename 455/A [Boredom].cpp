#include<bits/stdc++.h>
using namespace std;
const int mx=100005;
long long n,fac[mx],a[mx];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {cin>>a[i];
        fac[a[i]]++;
        }
        for(int i=1;i<=mx;i++)
        {
            fac[i]=i*fac[i];
            if(i!=1)
            {
                fac[i]+=fac[i-2];
                if(fac[i]<fac[i-1])
                    fac[i]=fac[i-1];
            }
        }
        cout<<fac[mx-1]<<endl;

}
