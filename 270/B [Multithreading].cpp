#include<iostream>
using namespace std;

main()
{
int n,i,a[100005],cnt=0;
cin>>n;
for(i=1;i<=n; i++)
    cin>>a[i];

    for(i=n;i>=2;i--)
    {
        if(a[i]>a[i-1])
            cnt++;
        else break;
        }
        cout<<n-cnt-1<<endl;

}
