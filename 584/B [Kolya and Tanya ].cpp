#include<bits/stdc++.h>
using namespace std;
long long sum=1,sum2=1,i,n;
int main()
{
    cin>>n;
    for(i=1; i<=3*n; i++)
    {
        sum=(sum*3)%(1000000007);
    }
    sum=(sum%1000000007);

    for(i=1; i<=n; i++)
    sum2=(sum2*7)%(1000000007);

    sum2=(sum2%1000000007);
    cout<<(sum-sum2+1000000007)%1000000007<<endl;
    return 0;
}














