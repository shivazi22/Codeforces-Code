#include<bits/stdc++.h>
using namespace std;
long n,k,i,j,cnt,a[104],b[200],sum,t,p;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=b[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>k)
        {
            sum-=a[i];
            t=a[i-1];
            p=i-1;
            break;
        }
        else if(sum==k)
        {
            t=a[i];
            p=i;
            break;
        }
        }
        if(i==n+1)
        {
            cout<<i-1<<endl;
            for(j=1;j<=n;j++)
                cout<<j<<" ";
        }
        else
        {
            cout<<p<<endl;
            for(j=1;j<=p;j++)
            {
                for(i=1;i<=n;i++)
                {
                    if(b[i]==a[j])
                    {
                        b[i]=0;
                        cout<<i<<" ";
                        break ;

                    }
                }
            }
        }
        return 0;
}





