#include<bits/stdc++.h>
using namespace std;
int a[105][105];
long long sum,i,j,x1,x2,x3,x4,y1,y2,y3,y4,n;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        x3=min(x1,x2);
        x4=max(x1,x2);
        y3=min(y1,y2);
        y4=max(y1,y2);
        for(i=y3;i<=y4;i++)
        {
            for(j=x3;j<=x4;j++)
            {
                a[i][j]++;
            }
        }

    }
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=100;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
