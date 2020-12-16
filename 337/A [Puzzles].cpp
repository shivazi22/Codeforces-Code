#include<bits/stdc++.h>
using namespace std;
int n,m,i,test,mini=2000,a[100];
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>a[i];
    sort(a+1,a+m+1);

    for(i=1;i<=m-n+1;i++)
    {
        test=a[i+(n-1)]-a[i];
        if(mini>test)
            mini=test;
    }
    cout<<mini<<endl;
    return 0;
}
