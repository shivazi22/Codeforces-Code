#include<bits/stdc++.h>
using namespace std;
long n,a,b,maxi=1,test,minute,cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        minute=a*60+b;
        if(test==minute)
        {
            cnt++;
            if(maxi<cnt)
                maxi=cnt;
        }
        else
        {
            test=minute;
            cnt=1;
        }
    }
    cout<<maxi<<endl;
    return 0;
}
