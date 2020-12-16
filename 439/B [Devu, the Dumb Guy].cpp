#include<bits/stdc++.h>
using namespace std;
long long n,x,i,sum,a[100005];
int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        if(x==1)
            sum+=a[i];
            else
            {
                sum+=a[i]*x;
                x--;
            }
    }
    cout<<sum<<endl;
}
