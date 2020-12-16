#include<bits/stdc++.h>
using namespace std;
long long n,i,t,cnt,sum,a[20],b[20];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t==0)
            cnt++;
        else if(t<0)
            b[t*-1]++;
        else a[t]++;
    }
    for(i=1;i<=10;i++)
    sum+= a[i]*b[i];
    sum+=(cnt*(cnt-1))/2;
    cout<<sum<<endl;

}
