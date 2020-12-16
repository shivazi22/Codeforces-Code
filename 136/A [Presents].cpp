#include<bits/stdc++.h>
using namespace std;
int n,a[200],aa[200];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {cin>>a[i];
    aa[a[i]]=i;}
    for(int i=1;i<=n;i++)
        cout<<aa[i]<<" ";
    return 0;


}
