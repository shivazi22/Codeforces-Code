#include<bits/stdc++.h>
using namespace std;

int n,m,k,i,a[100],cnt;

int main()
{

    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];

        sort(a+1,a+n+1);


        if(m<=k)
        {
            cout<<0<<endl;
            return 0;
        }
        m=m-k+1;
        for(i=n;i>=1;i--)
        {


            m=m-a[i]+1;
            if(m<=1)
            {
                cnt++;
                break;

            }
            else cnt++;

        }
        if(m>1)
            cout<<-1<<endl;
        else cout<<cnt<<endl;


return 0;
}





