#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int n,m,i,t,ans;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        ans=(t/m);
        if(t%m)
        ans++;
        shivazi.push_back(make_pair(ans,i));
    }
    sort(shivazi.begin(),shivazi.end());
    cout<<shivazi[n-1].second<<endl;
}
