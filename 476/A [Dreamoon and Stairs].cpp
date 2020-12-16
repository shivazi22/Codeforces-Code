#include<bits/stdc++.h>
using namespace std;
long i,n,cnt,q,p,m;
int main()
{
    cin>>n>>m;
    cnt=n/2;
    q=cnt;

    if(n%2) cnt++;

    for(int i=1;i<=10000;i++)
    {
        p=m*i;
        if(p>=cnt&&p<=cnt+q)
        {
            cout<<p<<endl;
            break;
        }
        if(p>cnt+q)
        {
            cout<<-1<<endl;
            break;
        }
    }
    return 0;
}
