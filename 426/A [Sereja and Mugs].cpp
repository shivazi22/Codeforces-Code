#include<bits/stdc++.h>
using namespace std;
long n,s,a[2000],st[2000],sum,i;

int main()
{
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        st[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if((sum-a[i])<=s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
