#include<bits/stdc++.h>
using namespace std;
int n,i,a[500];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
