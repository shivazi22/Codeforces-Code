#include<bits/stdc++.h>
using namespace std;
int a[200],b[200],m,n,i,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
        cin>>b[i];
    sort(a+1,a+n+1);
sort(b+1,b+m+1);
int cnt=0;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        if(b[j]==a[i]||abs(b[j]-a[i])==1)
        {
            b[j]=-1000000;
            cnt++;
            break;
        }
    }
}
cout<<cnt<<endl;
}
