#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,cnt;

int main()
{
    cin>>x>>y>>a>>b;
    long grab=__gcd(x,y);
    grab=(x*y)/grab;

   cnt= a/grab;
   if(a%grab==0) cnt--;
    cout<<(b/grab)-cnt<<endl;
    return 0;
}
