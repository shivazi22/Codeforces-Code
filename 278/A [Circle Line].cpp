#include<bits/stdc++.h>
using namespace std;
long st[200],sum,sum1,i,n,n1,m1,n2,m2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st[i];
        sum+=st[i];
    }
    cin>>n1>>m1;
    if(n1<m1)
        n2=n1;
    else
        n2=m1;
    m2=max(n1,m1);
    for(i=n2;i<m2;i++)
        sum1+=st[i];

if(sum1<sum-sum1)
    cout<<sum1<<endl;
else
    cout<<sum-sum1<<endl;

}
