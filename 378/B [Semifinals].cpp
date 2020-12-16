#include<bits/stdc++.h>
using namespace std;

long long a[100005],b[100005],l=1,r=1,n,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i]>>b[i];

     for(i=1;i<=n;i++)
         if(a[l]<b[r])
        a[l]=1,l++;
        else
        b[r]=1,r++;

         for(i=1;i<=n;i++)
            if(i>n/2&&a[i]!=1)
            cout<<0; else cout<<1;
            cout<<endl;

            for(i=1;i<=n;i++)
            if(i>n/2&&b[i]!=1)
            cout<<0; else cout<<1;
            return 0;
    }
