#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
cin>>a>>b>>c;
if(c==0&&a==b)
cout<<"YES"<<endl;
else if(c==0&&a!=b)
    cout<<"NO"<<endl;
else if((b-a)%c==0)
{
    int t=((b-a)/c)+1;
    if(t>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
    return 0;
}
