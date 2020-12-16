#include<bits/stdc++.h>
using namespace std;
int n,a,sum,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    float ans=float(sum/(n*100.000));
    printf("%f\n",ans*100.00);
    return 0;
}
