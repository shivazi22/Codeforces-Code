#include<bits/stdc++.h>
using namespace std;
long a[1050],cnt,i,mini,maxi,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        mini=a[1];
        maxi=a[1];
        for(i=2;i<=n;i++)
        {
            if(a[i]>maxi)
            {
                cnt++;
                maxi=a[i];
            }
            if(a[i]<mini)
            {
                cnt++;
                mini=a[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
