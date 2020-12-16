#include<bits/stdc++.h>
using namespace std;
long int n,i,j,m,a[100],b[100],x[10005],p,maxi;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    maxi=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((b[i]%a[j])==0)
            {
                p=b[i]/a[j];
                if(p>maxi)
                    maxi=p;
                //cout<<p<<" ";
                x[p]++;
            }
        }
    }

    //sort(x,x+10001);
    cout<<x[maxi]<<endl;
    return 0;
}
