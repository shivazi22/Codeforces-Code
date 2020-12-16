#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,a[100];
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
 sort(a+1,a+n+1);



 if(m>n)
    cout<<-1<<endl;
 else cout<<a[n-m+1]<<" "<<a[n-m+1]<<endl;
 return 0;


}

