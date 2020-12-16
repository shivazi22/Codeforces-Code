#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,ans,i,st[200],stt,j;
    cin>>n>>m;

    for(i=1;i<=n;i++)
    cin>>st[i];

    for(i=1;i<=n;i++)
    {

        cnt++;
        stt=m-st[i];
        //cout<<stt<<endl;
        for( j=i+1;j<=n;j++)
        {
            if(st[j]>stt)
            break;
            else
            {stt=stt-st[j];
            //cout<<stt<<endl;
            }

        }
        i=j-1;
    }
    cout<<cnt<<endl;




}
