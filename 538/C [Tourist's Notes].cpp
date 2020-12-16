#include<bits/stdc++.h>
using namespace std;
long long n,m,d[100005],dh[100005],i,boro,maxi,st1,st2,st3;

int main()
{
    cin>>n>>m;

    for(i=1;i<=m;i++)
        cin>>d[i]>>dh[i];

        boro=-10000;
    for(i=1;i<m;i++)
    {
        st1=d[i+1]-d[i];
        st2=abs(dh[i+1]-dh[i]);
        if(st2>st1)
        {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        maxi=max(dh[i],dh[i+1]);
        st3=d[i+1]-d[i]+1;
        st3=st3-2-abs(dh[i]-dh[i+1]);
        if(st3%2&&st3>0)
        maxi+=(st3/2)+1;

        if(st3%2==0)
            maxi+=(st3/2);

        if(maxi>boro)
            boro=maxi;
            //cout<<boro<<endl;
    }

    maxi=dh[1]+d[1]-1;
    if(maxi>boro)
            boro=maxi;

            maxi=(dh[m]+(n-d[m]));
            if(maxi>boro)
            boro=maxi;
    cout<<boro<<endl;
    return 0;
}

