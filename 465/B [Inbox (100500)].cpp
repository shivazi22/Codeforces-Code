#include<bits/stdc++.h>
using namespace std;
int cnt,i,b[1005],a[1005],k=1,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {cnt++;
        b[k++]=i;
        }
    }
    for(i=2;i<=k-1;i++)
    if(b[i]-b[i-1]>1)
            cnt++;
        cout<<cnt<<endl;

}
