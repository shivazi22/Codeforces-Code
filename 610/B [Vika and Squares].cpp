#include<bits/stdc++.h>
using namespace std;
long long sum,maxi=0,mina=1000000099,i,n,a[200005],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {cin>>a[i];
        if(a[i]<mina) mina=a[i];}
        sum=mina*n;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>mina)
                cnt++;
                else cnt=0;
            maxi=max(maxi,cnt);
        }
         for(int i=1;i<=n;i++)
        {
            if(a[i]>mina)
                cnt++;
                else
                {
                    for(int j=n;j>=1;j--)
                    {
                        if(a[i]>mina)
                     cnt++;
                    }
                    break;
                }
            }
        maxi=max(maxi,cnt);
        cout<<sum+maxi<<endl;
    return 0;
}
