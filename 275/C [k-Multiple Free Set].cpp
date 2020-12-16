#include<bits/stdc++.h>
using namespace std;

long long a[100500],i,cnt,n,k;
map<long long,int>m;


int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>a[i],m[a[i]]=1;

    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
     if(m[a[i]]==1)
        {m[k*a[i]]=0;
          cnt++;
          }
          cout<<cnt<<endl;
        return 0;
}
