#include<bits/stdc++.h>
using namespace std;
long aa[500],a,b,i,st,n;
int main()
{
    cin>>n;
    for(i=2;i<=n;i++)
    {
        cin>>st;
        aa[i]+=aa[i-1]+st;
    }
    cin>>a>>b;
    cout<<aa[b]-aa[a]<<endl;
}
