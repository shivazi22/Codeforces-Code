#include<bits/stdc++.h>
using namespace std;
long sum,i,a[10],n;
int main()
{
    cin>>n;
    for(i=1;i<=7;i++)
        cin>>a[i];
    for(;;)
    {
        int ans=0;
        for(i=1;i<=7;i++)
        {
            sum+=a[i];
            if(sum>=n)
            {
                ans=i;
                break;
            }
        }
        if(ans)
        {
            cout<<ans<<endl;
            break;
        }
    }
}
