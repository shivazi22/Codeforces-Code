#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,t;
int main()
{
    for(i=1;i<=5;i++)
    {
for(j=1;j<=5;j++)
{
    cin>>t;
    if(t==1)
        m=i,n=j;
}
    }
    cout<<abs(m-3)+abs(n-3)<<endl;
}
