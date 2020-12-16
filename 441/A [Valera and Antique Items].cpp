#include<bits/stdc++.h>
using namespace std;
long a,n,price,maxa,j,i,t,cnt[100];
int main()
{
    int k=1;
    cin>>n>>price;
    for(i=1;i<=n;i++)
    {
        cin>>a;
       int c=0;
        for(j=1;j<=a;j++)
           {
               cin>>t;
            if(t<price)
                c=1;
                }
            if(c==1)
            cnt[k++]=i;
    }
    cout<<k-1<<endl;
    for(i=1;i<=k-1;i++)
    cout<<cnt[i]<<" ";
    cout<<endl;
    return 0;
}
