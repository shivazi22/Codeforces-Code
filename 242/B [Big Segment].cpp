#include<bits/stdc++.h>
using namespace std;
long maxi=-10;
long mini=1000000009,i,a[100005],b[100005],n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<=mini)
        mini=a[i];

        if(b[i]>=maxi)
            maxi=b[i];

    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==mini && b[i]==maxi)
            {cout<<i<<endl;
        return 0;}
    }
    cout<<-1<<endl;
    return 0;
}
