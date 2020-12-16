#include<bits/stdc++.h>
using namespace std;
int p,q,l,r,i,ans[2050],ans2[2050],cnt,a,b,j;

int main()
{
    cin>>p>>q>>l>>r;
    while(p--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
            ans[i]++;
    }
    while(q--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
        ans2[i]++;
    }
    for(i=l;i<=r;i++)
    {
        for(j=0;j<=1000;j++)
        {
            if(ans2[j])
            {
                if(ans[j+i])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
