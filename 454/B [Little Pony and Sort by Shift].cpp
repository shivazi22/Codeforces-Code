#include<bits/stdc++.h>
using namespace std;
long n,p,i,j,a[100005],b[100005];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    int p=1;
    for(j=n;j>=1;j--)
        if(a[j-1]>a[j])  p=j;
        int k=1;
    for(i=p;i<=n;i++)
        b[k++]=a[i];
    for(i=1;i<=p-1;i++)
        b[k++]=a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(n-p+1==n)
        cout<<0<<endl;
    else cout<<n-p+1<<endl;
    return 0;



}
