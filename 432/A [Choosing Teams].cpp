#include<bits/stdc++.h>
using namespace std;
int a[2005],n,k,i,cnt;
int main()
{
    cin>>n>>k;
    if(n<3)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=1;i<=n;i++)
       {
    cin>>a[i];
    a[i]+=k;
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n-3+1;i+=3)
    {

        if(a[i]<=5&& a[i+1]<=5 &&a[i+2]<=5 )
            cnt++;
        else
            break;
    }
    //cout<<i<<endl;
    cout<<cnt<<endl;
}
