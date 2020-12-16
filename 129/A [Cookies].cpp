#include<bits/stdc++.h>
using namespace std;
int a[105],n,i,sum,cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=1;i<=n;i++)
    if((sum-a[i])%2==0)
            cnt++;

    cout<<cnt<<endl;
    return 0;
}
