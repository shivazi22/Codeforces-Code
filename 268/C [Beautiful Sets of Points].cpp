#include<bits/stdc++.h>
using namespace std;
int n,m,i;
int main()
{
    cin>>n>>m;
    if(m<n)
    n=m;
    cout<<n+1<<endl;

    for(i=0;i<=n;i++)
        cout<<i<<" "<<n-i<<endl;
    return 0;
}
