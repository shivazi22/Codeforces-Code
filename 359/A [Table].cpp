#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int flag=0,n,m,i,j,A;

int main()
{

    cin>>n>>m;
    for(i=1;i<=n;i++)
    {

    for(j=1;j<=m;j++)
    {
        cin>>A;
        if(A==1)
        {
        if(i==1||i==n)
        flag=1;
        else if(j==1||j==m)
        flag=1;
        }
    }
    }
    if(flag)
    cout<<2<<endl;
    else
    cout<<4<<endl;

    return 0;
}
