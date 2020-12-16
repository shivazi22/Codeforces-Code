#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,cnt[4004],a,b,c=0;
    while(cin>>n>>k)
    {
        c=0;
        memset(cnt,0,sizeof(cnt));
        while(k--)
        {
        cin>>m;
        if(m==1)
        {
            cin>>a>>b;
            cnt[a]++;
            cnt[b]++;
            c+=2;
        }
        else
        {
            cin>>a;
            cnt[a]++;
            c++;
        }
        }
        int cmin=0;
        for(int i=1;i<n;i++)
        {
            if(!cnt[i]){
            if(!cnt[i] && !cnt[i+1])
                i++;
            cmin++;
            }
        }
        cout<<cmin<<' '<<n-c-1<<endl;
    }
    return 0;
}
