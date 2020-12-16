#include<bits/stdc++.h>
using namespace std;
long n,d,i,sum,t;
int main()
{
    cin>>n>>d;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
    }
    if(sum+(n-1)*10>d)
        cout<<-1<<endl;
    else
    {
        d=d-sum;
        cout<<d/5<<endl;
    }
    return 0;
}
