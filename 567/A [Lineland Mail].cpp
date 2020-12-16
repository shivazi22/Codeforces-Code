#include<bits/stdc++.h>
using namespace std;
long a[200050];
int main()
{
    long n;
    cin>>n;
    for(long int i=1;i<=n;i++)
    cin>>a[i];

        cout<< (a[2]-a[1])<<" "<<(a[n]-a[1])<<endl;
        for(long int j=1;j<=n;j++)
        if(j!=1&&j!=n)
        cout<< min((a[j]-a[j-1]),(a[j+1]-a[j]))<<" "<<max((a[j]-a[1]),(a[n]-a[j]))<<endl;
        cout<< (a[n]-a[n-1])<<" "<<(a[n]-a[1])<<endl;
return 0;
}
