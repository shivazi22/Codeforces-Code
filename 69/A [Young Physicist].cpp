#include<bits/stdc++.h>
using namespace std;
int n,i,a,b,c,sum,sum1,sum2;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        sum+=a;
        sum1+=b;
        sum2+=c;
    }
    if(sum==0&&sum1==0&&sum2==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
