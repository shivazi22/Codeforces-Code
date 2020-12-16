#include<bits/stdc++.h>
using namespace std;
int n,i,cnt,cnt1,x,a;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a==5) cnt++;
        else cnt1++;
    }
    x=cnt/9;
    x*=9;
    if(cnt1==0)
    {cout<<-1<<endl;
    return 0;
    }
    for(i=1;i<=x;i++)
        cout<<5;
    if(x==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
        for(i=1;i<=cnt1;i++)
        cout<<0;
    return 0;
}
