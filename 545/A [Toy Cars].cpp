#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,cnt,a[200][200],ans[200];
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
    int k=1;
     for(i=1;i<=n;i++)
    {
        int cc=0;
        for(j=1;j<=n;j++)
        {

            if(a[i][j]==1||a[i][j]==3)
            {
                cc=1;
                 break;
            }
        }
        if(cc==0)
           {
            cnt++;
          ans[k++]=i;
          }
    }
    cout<<cnt<<endl;
    for(i=1;i<=cnt;i++)
        cout<<ans[i]<<" ";


    return 0;
}
