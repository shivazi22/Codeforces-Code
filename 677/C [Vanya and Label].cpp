#include<bits/stdc++.h>
using namespace std;
#define mod long(1e9+7)
int cnt=0;
int mapping(char z)
{
    if(z>='0'&&z<='9') return z-'0';
    else if(z>='A'&&z<='Z') return z-'A'+10;
    else if(z>='a'&&z<='z') return z-'a'+36;
    else if(z=='-') return 62;
    else return 63;
}
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l;i++)
    cnt+=6-__builtin_popcount(mapping(str[i]));
    long long ans=1;

    for(int i=1;i<=cnt;i++)
    {
        ans=((ans%mod)*(3%mod))%mod;
    }
    cout<<ans<<endl;
}
