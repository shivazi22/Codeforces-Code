#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,cnt2=0,a[2000];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>m) cnt++;
        else  cnt2++;
    }
    cout<<cnt*2+cnt2<<endl;
    return 0;
}
