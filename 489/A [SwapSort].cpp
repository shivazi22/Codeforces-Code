#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
long a[3005],i,n,j,x;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        x=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[x])
            x=j;
        if(i!=x)
            v.push_back(make_pair(i,x));
            swap(a[i],a[x]);
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}
