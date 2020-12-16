#include<bits/stdc++.h>
using namespace std;
long long n,k,i,maxi=-10000000000,f,t;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>f>>t;
        if(t>k)
            f=f-(t-k);
            if(maxi<f)
                maxi=f;
    }
    cout<<maxi<<endl;
}
