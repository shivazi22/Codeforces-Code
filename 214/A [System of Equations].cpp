#include<bits/stdc++.h>
using namespace std;

int n,m,a,b,cnt,x;

int main()
{
    cin>>n>>m;
    for(a=0;a<=100;a++)
    {
        for(b=0;b<=100;b++)
        {
            if(a*a+b==n&& b*b+a==m)
               {
                   cnt++;
                   //cout<<a<<b;

               }
            else if(x>(n+m))
                break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
