#include<bits/stdc++.h>
using namespace std;
long n,m,s,t;
int main()
{
    cin>>n>>m;
    s=n*(n+1)/2;
    if(m>s)
      m= m- (m/s)*s;
    t=(sqrt(m*8+1)-1)/2;
    cout<<m-(t*(t+1))/2<<endl;
}
