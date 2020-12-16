#include<bits/stdc++.h>
using namespace std;
long long st,st2,cnt,p,i,j;
long long a[20][20];
int main()
{
    cin>>st;
    st2=st;
    while(st2!=0)
    {
        st2=st2/10;
        cnt++;
    }
    memset(a,0,sizeof(a));
    long long maxi=0;
    for(i=cnt;i>=1;i--)
    {
        p=st%10;
        maxi=max(p,maxi);
        st=st/10;
        for(j=1;j<=p;j++)
            a[j][i]=1;
    }
   cout<<maxi<<endl;
    for(i=1;i<=maxi;i++)
    {
        for(j=1;j<=cnt;j++)
        {
            if(a[i][j]==1)
            {
                for(st=j;st<=cnt;st++)
                    cout<<a[i][st];
                    break;
            }
        }
        cout<<" ";
    }

    //cout<<cnt<<endl;
    return 0;
}
