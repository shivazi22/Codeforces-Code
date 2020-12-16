#include<bits/stdc++.h>
using namespace std;
vector<pair<long,long> >veg;
long f,t,sum,n,s,l;
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>f>>t;
       veg.push_back(make_pair(f,t));
    }
    sort(veg.begin(),veg.end());
    l=veg.size();
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        sum+=(s-veg[i].first);
        s=veg[i].first;
        if(sum<veg[i].second)
            sum=veg[i].second;
    }
    sum+=veg[0].first;
    cout<<sum<<endl;
    return 0;
}
