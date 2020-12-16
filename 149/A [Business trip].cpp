#include<bits/stdc++.h>
using namespace std;

int k,i,cnt,a[200],sum,n;

int main()
{
    cin>>k;
    for(i=1;i<=12;i++)
        cin>>a[i];

        if(k==0)
        {
            cout<<0<<endl;
            return 0;
        }

    sort(a+1,a+1+12);

    for(i=12;i>=1;i--)
    {
        sum+=a[i];
        if(sum<k)
            cnt++;
        else
            break;
    }
    if(i==0)
        cout<<-1<<endl;
    else
    cout<<cnt+1<<endl;
    return 0;
}
