#include<bits/stdc++.h>
using namespace std;
int a[30004],i,n,t;
int main()
{
    cin>>n>>t;
    for(i=1;i<=n-1;i++)
        cin>>a[i];
        i=1;
    while(i<=n-1)
    {
        i=i+a[i];
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}
