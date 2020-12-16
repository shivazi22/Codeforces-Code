#include<bits/stdc++.h>
using namespace std;
long t,n,y,x;
int main()
{
    cin>>n>>x>>y;
    t=(n*y)/100;
    if((n*y)%100) t++;
    if(t<=x) cout<<0<<endl;
    else cout<<t-x<<endl;
    return 0;
}
