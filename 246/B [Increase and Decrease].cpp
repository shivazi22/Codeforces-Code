#include<bits/stdc++.h>
using namespace std;
long long n,sum,i,t,a;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {
    cin>>t;
    sum+=t;
    }
    if(sum<0)
        sum=sum*-1;

    if(sum%n==0) cout<<n<<endl;
    else cout<<n-1<<endl;
    return 0;
}
