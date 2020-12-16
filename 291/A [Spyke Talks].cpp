#include<bits/stdc++.h>
using namespace std;
long long cnt,i,n,a[10000];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n-1;i++)
    {
        if(a[i]==a[i+1]&&a[i]!=0)
            cnt++;
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+1]!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<cnt<<endl;
    return 0;
}
