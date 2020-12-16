#include<bits/stdc++.h>
using namespace std;
long long x,y,n,t;
int main()
{
    cin>>x>>y;
    cin>>n;
    if(n==1)
    {
       t=x;
       t=t%1000000007;
       if(t<0)
           t= t+1000000007;
       cout<<t<<endl;
    }
   else if(n==2)
    {
        t=y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
        cout<<t<<endl;
    }
    else
    {
        if(n%3==0&&(n/3)%2==1)
           {
            t=y-x;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
           else if(n%3==0&&(n/3)%2==0)
           {
            t=x-y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==1&&(n/3)%2==1)
           {
            t=-x;
            t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==1&&(n/3)%2==0)
           {
            t=x;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==2&&(n/3)%2==1)
           {
            t=-y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==2&&(n/3)%2==0)
           {
            t=y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
           cout<<t<<endl;

    }
    return 0;
}
