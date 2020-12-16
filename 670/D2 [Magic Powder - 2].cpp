#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0; i<n; i++)
    cin>>a[i];
    vector<long long>b(n);
    for(int i=0; i<n; i++)
    cin>>b[i];
    long long mid,l=0,u=(long long) 2e9;
    while(l<u)
    {
        mid=(l+u+1)/2;
        long long t=0;
        for(int i=0; i<n; i++)
        {
            t+=max(0LL,a[i]*mid-b[i]);
            if(t>k) break;
        }
        if(t<=k) l=mid;
        else u=mid-1;
    }
    cout<<l<<endl;
    return 0;
}
