#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=1;
    cin>>n;
    long long x=n;
    long long value=sqrt(n);
    for(int i=2;i<=value;i++)
    {
        if(x%i==0)
        {
            ans*=i;
            while(x%i==0)
            x/=i;
            value=sqrt(x);
        }
    }
    if(x>1) ans*=x;
    cout<<ans<<endl;
    return 0;
}
