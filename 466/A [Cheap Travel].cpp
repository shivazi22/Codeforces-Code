#include<bits/stdc++.h>
using namespace std;
int sum,a,b,m,n,c;
int main()
{
    cin>>n>>m>>a>>b;
    if(float(b/m)<a*1.0)
        sum+=b*(n/m);
    else
        {
    sum+=a*n;
   // cout<<sum<<endl;
    c=1;
    }
    if(!c)
    {
        if(b>a*(n%m))
            sum+=a*(n%m);
        else sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}
