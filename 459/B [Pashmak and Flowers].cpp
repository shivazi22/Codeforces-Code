#include<bits/stdc++.h>
using namespace std;
long long a[200005],i,n,cnt1,cnt2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int i=1;
    while(a[i]==a[1])
    {
        cnt1++;
        i++;
    }
    i=n;
    while(a[i]==a[n])
    {
        cnt2++;
        i--;
    }
    if(cnt1==n||cnt2==n)
    cout<<"0 "<<(cnt1*(cnt1-1))/2<<endl;
    else cout<<a[n]-a[1]<<" "<<cnt1*cnt2<<endl;

    return 0;
}
