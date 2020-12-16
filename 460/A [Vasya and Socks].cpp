#include<bits/stdc++.h>
using namespace std;

int sum,n,m,nn;
int main()
{
    cin>>n>>m;
    nn=n/m;
    sum=n+nn;
    nn=nn+n%m;
    if(n)

    while(nn/m!=0)
    {

        sum=sum+nn/m;
        nn=nn/m+nn%m;
    }
    cout<<sum<<endl;
    }
