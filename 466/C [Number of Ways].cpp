#include<bits/stdc++.h>
using namespace std;
long long a[1000000],cnt,cnt2,i,n,j,t,t2,sum2,cnt3;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        a[i]=a[i-1]+t;
        if(a[i]==0)
            cnt3++;
        //cout<<a[i]<<" ";
    }
    if(a[n]==0)
    {
        cout<<(cnt3-2)*(cnt3-1)/2<<endl;
        return 0;
    }
    if(a[n]%3!=0)
    {cout<<0<<endl;
    return 0;
    }
    else
    {
        t=a[n]/3;
        t2=2*t;
    }
    for(i=n-1;i>=1;i--)
    {
        if(a[i]==t2)
            cnt++;
        if(a[i]==t &&t2!=0)
            sum2+=cnt;
    }

    cout<<sum2<<endl;
    return 0;

}
