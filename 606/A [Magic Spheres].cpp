#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  a,b,c,a1,b1,c1,sum=0;
   cin>>a>>b>>c>>a1>>b1>>c1;
   if(a+b+c<a1+b1+c1) {cout<<"No"<<endl;return 0;}
   if(a-a1<0) sum+=(a-a1);
   else sum+=(a-a1)/2;

    if(b-b1<0) sum+=(b-b1);
   else sum+=(b-b1)/2;
    if(c-c1<0) sum+=(c-c1);
   else sum+=(c-c1)/2;

   if(sum<0)
     cout<<"No"<<endl;
   else cout<<"Yes"<<endl;

    return 0;
}
