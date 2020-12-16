#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[400],p,q;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int maxi=0;
    int mina=1000;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            p=i;
        }
         if(a[i]<mina)
        {
            mina=a[i];
            q=i;
        }

    }
    if(p<q)
    {
     cout<<q-p+max((p-1),(n-q))<<endl;
    }
    else cout<<p-q+max(q-1,(n-p))<<endl;



    return 0;
}
