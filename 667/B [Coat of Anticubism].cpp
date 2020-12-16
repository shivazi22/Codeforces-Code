#include<bits/stdc++.h>
using namespace std;
long long n,sum=0,maxi=0,maxi2;
long long a[200000];
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        maxi=max(maxi,a[i]);
    }
    maxi2=sum-maxi;
    cout<<maxi-maxi2+1<<endl;
return 0;}
