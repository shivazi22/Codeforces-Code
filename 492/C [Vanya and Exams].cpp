#include<bits/stdc++.h>
using namespace std;
long long res,i,st1,st2,n,r,avr,t,ans;

pair<int,int>a[100005];
int main()
{
    cin>>n>>r>>avr;
    for(i=0;i<n;i++)
    {
        cin>>st1>>st2;
        res+=st1;
        a[i].first=st2;
        a[i].second=st1;
    }
    sort(a,a+n);
    if(res>=(n*avr))
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        n=n*avr-res;
        i=0;
        while(n!=0)
        {
            t=r-a[i].second;
            if(t<=n)
            {
                ans+=t*a[i].first;
                n-=t;
            }
            else
            {
                ans+=n*a[i].first;
                n=0;
            }
            i++;
        }
        cout<<ans<<endl;
    }


   return 0;
   }
