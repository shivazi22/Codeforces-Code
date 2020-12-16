#include<bits/stdc++.h>
using namespace std;
#define mx 1000000000000000000
int main()
{
    unsigned long long l,r,k,cc=0;
    cin>>l>>r>>k;

        long long ans=1;
        for(;;)
        {
            if(ans>=l&&ans<=r) {cout<<ans<<" ";cc=1;}
             if (ans<=(r/k))  ans=k*ans;
            else break;
        }
    if(cc==0)
    cout<<-1<<endl;
    return 0;
}
