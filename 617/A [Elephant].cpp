#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0;
    cin>>n;
    ans+=n/5;
    if(n%5) ans++;
    cout<<ans<<endl;
    return 0;
}
