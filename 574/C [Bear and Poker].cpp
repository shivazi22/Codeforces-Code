#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];

        while(a[1]%2==0)
        a[1]/=2;
        while(a[1]%3==0)
        a[1]/=3;

    for( i=2;i<=n;i++)
    {
        while(a[i]%2==0)
            a[i]/=2;
        while(a[i]%3==0)
            a[i]/=3;
            if(a[1]!=a[i])
            {
                cout<<"No"<<endl;
                break;
            }
    }
    if(i==n+1) cout<<"Yes"<<endl;
    return 0;
}
