#include<bits/stdc++.h>
using namespace std;
long a[100005],n,i,police,cnt,m;
int main()
{
    cin>>n;
    m=n;
    while(m--)
    cin>>a[i++];
    for(i=0;i<n;i++)
    {
        if(a[i]<0&&police==0)
            cnt++;
        else if(a[i]<0&&police>0)
            police--;
        else police+=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}
