#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,sum,sum2,a[50][50],cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum2=0;
            for(k=1;k<=n;k++)
                sum+=a[k][j];
            for(k=1;k<=n;k++)
            sum2+=a[i][k];
            if(sum>sum2)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
