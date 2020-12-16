#include<bits/stdc++.h>
using namespace std;
vector<long long>veg;

int main()
{
    long n;
    cin>>n;
    for(long int i=1;i<=n;i++)
       {
           long long value;
           cin>>value;
            veg.push_back(value);
       }

        long long  cnt=1;
       long long maxi=0;
    for(long int i=0;i<n-1;i++)
    {
        if(veg[i]<=veg[i+1])
            cnt++;
            else cnt=1;

          maxi= max(cnt,maxi);
        }
        if(n==1) cout<<1<<endl;
        else
    cout<<maxi<<endl;
    return 0;
}
