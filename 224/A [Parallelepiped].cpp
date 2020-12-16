#include<bits/stdc++.h>
using namespace std;
int a,b,c,t,t1,t2;
int main()
{
    cin>>a>>b>>c;
   int t= sqrt((a*c)/b)+sqrt((b*a)/c)+sqrt((c*b)/a);
   cout<<t*4<<endl;
    return 0;
}
