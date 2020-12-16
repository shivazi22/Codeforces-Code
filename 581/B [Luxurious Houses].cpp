#include<bits/stdc++.h>
using namespace std;
long long a[100008],a2[100008],n;
int main()
{    cin>>n;
    for(long int i=1;i<=n;i++)
    cin>>a[i];

    long long maxi=a[n];
    for(long i=n-1;i>=1;i--)
    {
        if(a[i]>maxi)
        {a2[i]=a[i]-1;
        maxi=a[i];
        }
        else if(a[i]==maxi)
        a2[i]=a[i];
        else
            a2[i]=maxi;
    }
    for(long i=1;i<=n-1;i++)
   cout<<a2[i]-a[i]+1<<" ";

    cout<<0<<endl;
    return 0;
}













