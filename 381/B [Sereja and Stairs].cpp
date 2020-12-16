#include<bits/stdc++.h>
using namespace std;
int n,a[11000],res[11000],i,st,ptr;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st;
        a[st]++;
    }
    int k=1;
    for(i=1;i<=5000;i++)
    {
        if(a[i]!=0)
        {
            res[k++]=i;
            ptr=i;
        }
    }
    for(i=ptr-1;i>=1;i--)
    {
        if(a[i]>1)
            res[k++]=i;
    }
    cout<<k-1<<endl;

    for(i=1;i<k;i++)
    cout<<res[i]<<" ";
    return 0;
}
