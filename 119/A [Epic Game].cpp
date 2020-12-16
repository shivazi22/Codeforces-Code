#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x;
    cin>>a>>b>>n;
    while(1)
    {
        x=__gcd(a,n);
        n=n-x;
        if(n<0) {cout<<"1"<<endl; break;}
        x=__gcd(b,n);
        n=n-x;
        if(n<0) {cout<<"0"<<endl;break;}
    }
    return 0;
}
