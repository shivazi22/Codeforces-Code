#include<bits/stdc++.h>
using namespace std;
int a[1050],aa[1050],ans,n,i,k,maxi=-1;

set<int>myset;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        aa[a[i]]++;
        myset.insert(a[i]);
    }

    for(i=0;i<=1000;i++)
    {
        if(aa[i]>maxi)
            maxi=aa[i];
}

cout<<maxi<<" ";
cout<<myset.size()<<endl;

    return 0;

}

